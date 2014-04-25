
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VirtualSystemSettingDataComponentDeps_TRU64.h"
#else
#	include "UNIX_VirtualSystemSettingDataComponentDeps_STUB.h"
#endif
