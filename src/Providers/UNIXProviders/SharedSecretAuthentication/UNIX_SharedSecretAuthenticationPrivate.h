
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedSecretAuthenticationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedSecretAuthenticationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedSecretAuthenticationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedSecretAuthenticationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedSecretAuthenticationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedSecretAuthenticationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedSecretAuthenticationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedSecretAuthenticationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedSecretAuthenticationPrivate_TRU64.h"
#else
#	include "UNIX_SharedSecretAuthenticationPrivate_STUB.h"
#endif
