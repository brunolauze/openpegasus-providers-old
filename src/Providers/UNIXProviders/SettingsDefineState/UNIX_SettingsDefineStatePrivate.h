
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SettingsDefineStatePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SettingsDefineStatePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SettingsDefineStatePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SettingsDefineStatePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SettingsDefineStatePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SettingsDefineStatePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SettingsDefineStatePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SettingsDefineStatePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SettingsDefineStatePrivate_TRU64.h"
#else
#	include "UNIX_SettingsDefineStatePrivate_STUB.h"
#endif
