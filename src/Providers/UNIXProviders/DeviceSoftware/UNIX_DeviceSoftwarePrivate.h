
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceSoftwarePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceSoftwarePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceSoftwarePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceSoftwarePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceSoftwarePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceSoftwarePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceSoftwarePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceSoftwarePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceSoftwarePrivate_TRU64.h"
#else
#	include "UNIX_DeviceSoftwarePrivate_STUB.h"
#endif
