
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculationServiceForDropperDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculationServiceForDropperDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculationServiceForDropperDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculationServiceForDropperDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculationServiceForDropperDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculationServiceForDropperDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculationServiceForDropperDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculationServiceForDropperDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculationServiceForDropperDeps_TRU64.h"
#else
#	include "UNIX_CalculationServiceForDropperDeps_STUB.h"
#endif
