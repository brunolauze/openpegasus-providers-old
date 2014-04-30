
#include "OpenSSLHelper.h"

#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/evp.h>
#include <openssl/x509.h>

Array<Uint8> OpenSSLHelper::getPublicKey(const char* cert)
{
    Array<Uint8> results;
    X509 *x509;
    BIO *i = BIO_new(BIO_s_file());
    BIO *o = BIO_new_fp(stdout,BIO_NOCLOSE);

    if((BIO_read_filename(i, cert) <= 0) ||
       ((x509 = PEM_read_bio_X509_AUX(i, NULL, NULL, NULL)) == NULL)) {
           //Bad certificate, unable to read
	   return results;
    }
    pStoredPublicKey = X509_get_pubkey(x509);
	if(pStoredPublicKey == NULL)
	{
		return results;
	        //publicKey is NULL
	}
	if(pStoredPublicKey->type == EVP_PKEY_RSA) {
	        RSA *x = pStoredPublicKey->pkey.rsa;
	        bn = x->n;
	}
	else if(pStoredPublicKey->type == EVP_PKEY_DSA) {

	}
	else if(pStoredPublicKey->type == EVP_PKEY_EC) {
	}
	else {
	    //Unkown publicKey
		return results;
	}
	int pkeyLen;
	unsigned char *ucBuf, *uctempBuf;
	pkeyLen = i2d_PublicKey(pStoredPublicKey, NULL);
	ucBuf = (unsigned char *)malloc(pkeyLen+1);
	uctempBuf = ucBuf;
	i2d_PublicKey(pStoredPublicKey, &uctempBuf);
	int ii;
	for (ii = 0; ii < n; ii++)
	{
		results.append((unsigned char)key[ii]);
	}
	keyLen = EVP_PKEY_size(pStoredPublicKey);
	EVP_PKEY_free(pStoredPublicKey);
	return results;
}
