
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps_STUB.h"
#endif
