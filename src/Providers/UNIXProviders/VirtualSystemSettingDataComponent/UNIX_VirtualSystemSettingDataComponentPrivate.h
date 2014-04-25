
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_TRU64.h"
#else
#	include "UNIX_VirtualSystemSettingDataComponentPrivate_STUB.h"
#endif
