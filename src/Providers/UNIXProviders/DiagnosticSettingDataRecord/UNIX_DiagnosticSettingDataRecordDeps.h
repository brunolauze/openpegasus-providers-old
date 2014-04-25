
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiagnosticSettingDataRecordDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiagnosticSettingDataRecordDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiagnosticSettingDataRecordDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiagnosticSettingDataRecordDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiagnosticSettingDataRecordDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiagnosticSettingDataRecordDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiagnosticSettingDataRecordDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiagnosticSettingDataRecordDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiagnosticSettingDataRecordDeps_TRU64.h"
#else
#	include "UNIX_DiagnosticSettingDataRecordDeps_STUB.h"
#endif
