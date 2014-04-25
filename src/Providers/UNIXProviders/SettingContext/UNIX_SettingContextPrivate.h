
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SettingContextPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SettingContextPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SettingContextPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SettingContextPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SettingContextPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SettingContextPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SettingContextPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SettingContextPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SettingContextPrivate_TRU64.h"
#else
#	include "UNIX_SettingContextPrivate_STUB.h"
#endif
