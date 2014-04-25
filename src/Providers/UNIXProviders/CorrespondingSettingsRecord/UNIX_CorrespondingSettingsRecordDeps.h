
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CorrespondingSettingsRecordDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CorrespondingSettingsRecordDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CorrespondingSettingsRecordDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CorrespondingSettingsRecordDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CorrespondingSettingsRecordDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CorrespondingSettingsRecordDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CorrespondingSettingsRecordDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CorrespondingSettingsRecordDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CorrespondingSettingsRecordDeps_TRU64.h"
#else
#	include "UNIX_CorrespondingSettingsRecordDeps_STUB.h"
#endif
