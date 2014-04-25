
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_TRU64.h"
#else
#	include "UNIX_PublicPrivateKeyAuthenticationDeps_STUB.h"
#endif
