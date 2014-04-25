
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIPathConfigurationServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIPathConfigurationServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIPathConfigurationServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIPathConfigurationServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIPathConfigurationServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIPathConfigurationServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIPathConfigurationServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIPathConfigurationServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIPathConfigurationServicePrivate_TRU64.h"
#else
#	include "UNIX_SCSIPathConfigurationServicePrivate_STUB.h"
#endif
