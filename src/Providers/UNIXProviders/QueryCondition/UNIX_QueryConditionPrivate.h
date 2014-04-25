
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueryConditionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueryConditionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueryConditionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueryConditionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueryConditionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueryConditionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueryConditionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueryConditionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueryConditionPrivate_TRU64.h"
#else
#	include "UNIX_QueryConditionPrivate_STUB.h"
#endif
