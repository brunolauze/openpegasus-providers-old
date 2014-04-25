
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SettingContextDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SettingContextDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SettingContextDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SettingContextDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SettingContextDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SettingContextDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SettingContextDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SettingContextDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SettingContextDeps_TRU64.h"
#else
#	include "UNIX_SettingContextDeps_STUB.h"
#endif
