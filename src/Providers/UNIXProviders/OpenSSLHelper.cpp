
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

    if((BIO_read_filename(i, cert) <= 0) ||
       ((x509 = PEM_read_bio_X509_AUX(i, NULL, NULL, NULL)) == NULL)) {
           //Bad certificate, unable to read
	   return results;
    }
    EVP_PKEY *pStoredPublicKey = X509_get_pubkey(x509);
	if(pStoredPublicKey == NULL)
	{
		return results;
	        //publicKey is NULL
	}
	int pkeyLen;
	unsigned char *ucBuf, *uctempBuf;
	pkeyLen = i2d_PublicKey(pStoredPublicKey, NULL);
	ucBuf = (unsigned char *)malloc(pkeyLen+1);
	uctempBuf = ucBuf;
	i2d_PublicKey(pStoredPublicKey, &uctempBuf);
	int ii;
	for (ii = 0; ii < pkeyLen; ii++)
	{
		results.append((unsigned char)uctempBuf[ii]);
	}
	EVP_PKEY_free(pStoredPublicKey);
	return results;
}
