
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIMultipathSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIMultipathSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIMultipathSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIMultipathSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIMultipathSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIMultipathSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIMultipathSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIMultipathSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIMultipathSettingsPrivate_TRU64.h"
#else
#	include "UNIX_SCSIMultipathSettingsPrivate_STUB.h"
#endif
