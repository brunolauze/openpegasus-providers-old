
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSISessionSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSISessionSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSISessionSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSISessionSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSISessionSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSISessionSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSISessionSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSISessionSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSISessionSettingsPrivate_TRU64.h"
#else
#	include "UNIX_iSCSISessionSettingsPrivate_STUB.h"
#endif
