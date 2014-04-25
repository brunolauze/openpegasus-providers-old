
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicatorLEDDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicatorLEDDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicatorLEDDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicatorLEDDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicatorLEDDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicatorLEDDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicatorLEDDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicatorLEDDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicatorLEDDeps_TRU64.h"
#else
#	include "UNIX_IndicatorLEDDeps_STUB.h"
#endif
