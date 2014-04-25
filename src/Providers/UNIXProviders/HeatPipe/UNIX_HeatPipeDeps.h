
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeatPipeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeatPipeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeatPipeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeatPipeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeatPipeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeatPipeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeatPipeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeatPipeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeatPipeDeps_TRU64.h"
#else
#	include "UNIX_HeatPipeDeps_STUB.h"
#endif
