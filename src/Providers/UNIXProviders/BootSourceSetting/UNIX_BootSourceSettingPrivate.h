
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BootSourceSettingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BootSourceSettingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BootSourceSettingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BootSourceSettingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BootSourceSettingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BootSourceSettingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BootSourceSettingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BootSourceSettingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BootSourceSettingPrivate_TRU64.h"
#else
#	include "UNIX_BootSourceSettingPrivate_STUB.h"
#endif
