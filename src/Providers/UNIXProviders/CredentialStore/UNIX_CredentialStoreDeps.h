
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CredentialStoreDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CredentialStoreDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CredentialStoreDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CredentialStoreDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CredentialStoreDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CredentialStoreDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CredentialStoreDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CredentialStoreDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CredentialStoreDeps_TRU64.h"
#else
#	include "UNIX_CredentialStoreDeps_STUB.h"
#endif
