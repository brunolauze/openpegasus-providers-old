
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Specific802dot1QVLANServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Specific802dot1QVLANServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Specific802dot1QVLANServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Specific802dot1QVLANServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Specific802dot1QVLANServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Specific802dot1QVLANServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Specific802dot1QVLANServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Specific802dot1QVLANServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Specific802dot1QVLANServiceDeps_TRU64.h"
#else
#	include "UNIX_Specific802dot1QVLANServiceDeps_STUB.h"
#endif
