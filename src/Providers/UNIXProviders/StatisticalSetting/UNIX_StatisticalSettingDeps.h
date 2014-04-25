
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticalSettingDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticalSettingDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticalSettingDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticalSettingDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticalSettingDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticalSettingDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticalSettingDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticalSettingDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticalSettingDeps_TRU64.h"
#else
#	include "UNIX_StatisticalSettingDeps_STUB.h"
#endif
