
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CIMOMStatisticalDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CIMOMStatisticalDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CIMOMStatisticalDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CIMOMStatisticalDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CIMOMStatisticalDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CIMOMStatisticalDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CIMOMStatisticalDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CIMOMStatisticalDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CIMOMStatisticalDataPrivate_TRU64.h"
#else
#	include "UNIX_CIMOMStatisticalDataPrivate_STUB.h"
#endif
