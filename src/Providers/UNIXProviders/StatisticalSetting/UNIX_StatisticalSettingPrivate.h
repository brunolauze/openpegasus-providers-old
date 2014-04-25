
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticalSettingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticalSettingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticalSettingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticalSettingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticalSettingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticalSettingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticalSettingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticalSettingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticalSettingPrivate_TRU64.h"
#else
#	include "UNIX_StatisticalSettingPrivate_STUB.h"
#endif
