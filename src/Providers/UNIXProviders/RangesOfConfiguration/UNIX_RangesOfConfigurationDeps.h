
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RangesOfConfigurationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RangesOfConfigurationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RangesOfConfigurationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RangesOfConfigurationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RangesOfConfigurationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RangesOfConfigurationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RangesOfConfigurationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RangesOfConfigurationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RangesOfConfigurationDeps_TRU64.h"
#else
#	include "UNIX_RangesOfConfigurationDeps_STUB.h"
#endif
