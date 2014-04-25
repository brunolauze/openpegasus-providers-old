
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ModifySettingActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ModifySettingActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ModifySettingActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ModifySettingActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ModifySettingActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ModifySettingActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ModifySettingActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ModifySettingActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ModifySettingActionDeps_TRU64.h"
#else
#	include "UNIX_ModifySettingActionDeps_STUB.h"
#endif
