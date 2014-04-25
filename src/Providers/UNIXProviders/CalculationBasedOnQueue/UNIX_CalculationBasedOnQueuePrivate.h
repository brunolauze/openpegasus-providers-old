
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculationBasedOnQueuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculationBasedOnQueuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculationBasedOnQueuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculationBasedOnQueuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculationBasedOnQueuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculationBasedOnQueuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculationBasedOnQueuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculationBasedOnQueuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculationBasedOnQueuePrivate_TRU64.h"
#else
#	include "UNIX_CalculationBasedOnQueuePrivate_STUB.h"
#endif
