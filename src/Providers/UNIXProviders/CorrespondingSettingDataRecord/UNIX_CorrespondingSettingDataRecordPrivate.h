
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CorrespondingSettingDataRecordPrivate_TRU64.h"
#else
#	include "UNIX_CorrespondingSettingDataRecordPrivate_STUB.h"
#endif
