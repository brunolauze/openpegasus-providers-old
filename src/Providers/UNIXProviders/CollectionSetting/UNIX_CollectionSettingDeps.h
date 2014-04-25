
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionSettingDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionSettingDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionSettingDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionSettingDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionSettingDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionSettingDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionSettingDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionSettingDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionSettingDeps_TRU64.h"
#else
#	include "UNIX_CollectionSettingDeps_STUB.h"
#endif
