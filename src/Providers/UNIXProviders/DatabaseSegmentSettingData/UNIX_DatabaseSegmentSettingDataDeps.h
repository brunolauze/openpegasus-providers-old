
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseSegmentSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseSegmentSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseSegmentSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseSegmentSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseSegmentSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseSegmentSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseSegmentSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseSegmentSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseSegmentSettingDataDeps_TRU64.h"
#else
#	include "UNIX_DatabaseSegmentSettingDataDeps_STUB.h"
#endif
