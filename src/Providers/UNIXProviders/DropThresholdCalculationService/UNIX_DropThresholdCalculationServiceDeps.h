
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DropThresholdCalculationServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DropThresholdCalculationServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DropThresholdCalculationServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DropThresholdCalculationServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DropThresholdCalculationServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DropThresholdCalculationServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DropThresholdCalculationServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DropThresholdCalculationServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DropThresholdCalculationServiceDeps_TRU64.h"
#else
#	include "UNIX_DropThresholdCalculationServiceDeps_STUB.h"
#endif
