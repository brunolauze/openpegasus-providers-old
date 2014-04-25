
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCSwitchSettingsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCSwitchSettingsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCSwitchSettingsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCSwitchSettingsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCSwitchSettingsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCSwitchSettingsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCSwitchSettingsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCSwitchSettingsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCSwitchSettingsDeps_TRU64.h"
#else
#	include "UNIX_FCSwitchSettingsDeps_STUB.h"
#endif
