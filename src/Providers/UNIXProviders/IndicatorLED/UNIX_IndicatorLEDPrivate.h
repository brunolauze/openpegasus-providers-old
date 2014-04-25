
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicatorLEDPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicatorLEDPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicatorLEDPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicatorLEDPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicatorLEDPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicatorLEDPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicatorLEDPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicatorLEDPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicatorLEDPrivate_TRU64.h"
#else
#	include "UNIX_IndicatorLEDPrivate_STUB.h"
#endif
