
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate_STUB.h"
#endif
