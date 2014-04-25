
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_TRU64.h"
#else
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps_STUB.h"
#endif
