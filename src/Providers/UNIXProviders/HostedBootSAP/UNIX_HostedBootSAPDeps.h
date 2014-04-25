
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedBootSAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedBootSAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedBootSAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedBootSAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedBootSAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedBootSAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedBootSAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedBootSAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedBootSAPDeps_TRU64.h"
#else
#	include "UNIX_HostedBootSAPDeps_STUB.h"
#endif
