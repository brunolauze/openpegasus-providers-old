
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSISessionSettingsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSISessionSettingsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSISessionSettingsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSISessionSettingsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSISessionSettingsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSISessionSettingsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSISessionSettingsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSISessionSettingsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSISessionSettingsDeps_TRU64.h"
#else
#	include "UNIX_iSCSISessionSettingsDeps_STUB.h"
#endif
