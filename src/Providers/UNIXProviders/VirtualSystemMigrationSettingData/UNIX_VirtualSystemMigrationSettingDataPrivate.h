
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_VirtualSystemMigrationSettingDataPrivate_STUB.h"
#endif
