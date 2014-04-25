
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CorrespondingSettingDataRecordDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CorrespondingSettingDataRecordDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CorrespondingSettingDataRecordDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CorrespondingSettingDataRecordDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CorrespondingSettingDataRecordDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CorrespondingSettingDataRecordDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CorrespondingSettingDataRecordDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CorrespondingSettingDataRecordDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CorrespondingSettingDataRecordDeps_TRU64.h"
#else
#	include "UNIX_CorrespondingSettingDataRecordDeps_STUB.h"
#endif
