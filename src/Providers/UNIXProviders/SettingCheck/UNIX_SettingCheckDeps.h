
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SettingCheckDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SettingCheckDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SettingCheckDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SettingCheckDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SettingCheckDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SettingCheckDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SettingCheckDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SettingCheckDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SettingCheckDeps_TRU64.h"
#else
#	include "UNIX_SettingCheckDeps_STUB.h"
#endif
