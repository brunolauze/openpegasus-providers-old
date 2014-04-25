
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate_STUB.h"
#endif
