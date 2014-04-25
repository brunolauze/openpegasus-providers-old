
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueryConditionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueryConditionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueryConditionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueryConditionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueryConditionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueryConditionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueryConditionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueryConditionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueryConditionDeps_TRU64.h"
#else
#	include "UNIX_QueryConditionDeps_STUB.h"
#endif
