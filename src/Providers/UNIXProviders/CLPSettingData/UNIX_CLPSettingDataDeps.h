
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CLPSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CLPSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CLPSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CLPSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CLPSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CLPSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CLPSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CLPSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CLPSettingDataDeps_TRU64.h"
#else
#	include "UNIX_CLPSettingDataDeps_STUB.h"
#endif
