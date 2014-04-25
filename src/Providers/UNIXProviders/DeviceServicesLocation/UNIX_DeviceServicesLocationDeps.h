
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceServicesLocationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceServicesLocationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceServicesLocationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceServicesLocationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceServicesLocationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceServicesLocationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceServicesLocationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceServicesLocationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceServicesLocationDeps_TRU64.h"
#else
#	include "UNIX_DeviceServicesLocationDeps_STUB.h"
#endif
