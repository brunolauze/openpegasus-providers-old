
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccountSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccountSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccountSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccountSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccountSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccountSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccountSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccountSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccountSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_AccountSettingDataPrivate_STUB.h"
#endif
