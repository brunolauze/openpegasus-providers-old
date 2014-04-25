
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DocumentAuthenticationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DocumentAuthenticationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DocumentAuthenticationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DocumentAuthenticationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DocumentAuthenticationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DocumentAuthenticationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DocumentAuthenticationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DocumentAuthenticationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DocumentAuthenticationDeps_TRU64.h"
#else
#	include "UNIX_DocumentAuthenticationDeps_STUB.h"
#endif
