
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DoorAccessToDeviceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DoorAccessToDeviceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DoorAccessToDeviceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DoorAccessToDeviceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DoorAccessToDeviceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DoorAccessToDeviceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DoorAccessToDeviceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DoorAccessToDeviceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DoorAccessToDeviceDeps_TRU64.h"
#else
#	include "UNIX_DoorAccessToDeviceDeps_STUB.h"
#endif
