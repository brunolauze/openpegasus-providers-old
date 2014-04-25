
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_ConnectivityMembershipSettingDataPrivate_STUB.h"
#endif
