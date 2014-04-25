
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementSettingDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementSettingDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementSettingDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementSettingDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementSettingDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementSettingDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementSettingDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementSettingDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementSettingDeps_TRU64.h"
#else
#	include "UNIX_ElementSettingDeps_STUB.h"
#endif
