
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Specific802dot1QVLANServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Specific802dot1QVLANServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Specific802dot1QVLANServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Specific802dot1QVLANServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Specific802dot1QVLANServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Specific802dot1QVLANServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Specific802dot1QVLANServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Specific802dot1QVLANServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Specific802dot1QVLANServicePrivate_TRU64.h"
#else
#	include "UNIX_Specific802dot1QVLANServicePrivate_STUB.h"
#endif
