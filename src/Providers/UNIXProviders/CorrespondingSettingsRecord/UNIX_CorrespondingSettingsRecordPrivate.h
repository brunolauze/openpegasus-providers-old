
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CorrespondingSettingsRecordPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CorrespondingSettingsRecordPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CorrespondingSettingsRecordPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CorrespondingSettingsRecordPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CorrespondingSettingsRecordPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CorrespondingSettingsRecordPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CorrespondingSettingsRecordPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CorrespondingSettingsRecordPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CorrespondingSettingsRecordPrivate_TRU64.h"
#else
#	include "UNIX_CorrespondingSettingsRecordPrivate_STUB.h"
#endif
