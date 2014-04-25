
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionSettingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionSettingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionSettingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionSettingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionSettingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionSettingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionSettingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionSettingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionSettingPrivate_TRU64.h"
#else
#	include "UNIX_CollectionSettingPrivate_STUB.h"
#endif
