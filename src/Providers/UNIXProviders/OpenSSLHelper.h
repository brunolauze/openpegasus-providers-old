
#include "UNIX_Common.h"


class OpenSSLHelper
{
public:
		static Array<Uint8> getPublicKey(const char *cert);
};