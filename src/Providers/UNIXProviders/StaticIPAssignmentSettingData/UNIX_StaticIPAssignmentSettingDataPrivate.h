
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_StaticIPAssignmentSettingDataPrivate_STUB.h"
#endif
