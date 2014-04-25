
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculationServiceForDropperPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculationServiceForDropperPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculationServiceForDropperPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculationServiceForDropperPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculationServiceForDropperPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculationServiceForDropperPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculationServiceForDropperPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculationServiceForDropperPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculationServiceForDropperPrivate_TRU64.h"
#else
#	include "UNIX_CalculationServiceForDropperPrivate_STUB.h"
#endif
