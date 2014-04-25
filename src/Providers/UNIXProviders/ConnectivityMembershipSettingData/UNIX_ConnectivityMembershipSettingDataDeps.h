
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConnectivityMembershipSettingDataDeps_TRU64.h"
#else
#	include "UNIX_ConnectivityMembershipSettingDataDeps_STUB.h"
#endif
