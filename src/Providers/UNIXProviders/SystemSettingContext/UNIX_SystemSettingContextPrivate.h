
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemSettingContextPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemSettingContextPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemSettingContextPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemSettingContextPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemSettingContextPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemSettingContextPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemSettingContextPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemSettingContextPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemSettingContextPrivate_TRU64.h"
#else
#	include "UNIX_SystemSettingContextPrivate_STUB.h"
#endif
