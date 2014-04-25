
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ScopedSettingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ScopedSettingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ScopedSettingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ScopedSettingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ScopedSettingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ScopedSettingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ScopedSettingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ScopedSettingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ScopedSettingPrivate_TRU64.h"
#else
#	include "UNIX_ScopedSettingPrivate_STUB.h"
#endif
