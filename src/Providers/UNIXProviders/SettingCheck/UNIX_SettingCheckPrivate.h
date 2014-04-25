
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SettingCheckPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SettingCheckPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SettingCheckPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SettingCheckPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SettingCheckPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SettingCheckPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SettingCheckPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SettingCheckPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SettingCheckPrivate_TRU64.h"
#else
#	include "UNIX_SettingCheckPrivate_STUB.h"
#endif
