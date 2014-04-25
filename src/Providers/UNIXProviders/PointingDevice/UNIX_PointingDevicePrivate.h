
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PointingDevicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PointingDevicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PointingDevicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PointingDevicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PointingDevicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PointingDevicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PointingDevicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PointingDevicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PointingDevicePrivate_TRU64.h"
#else
#	include "UNIX_PointingDevicePrivate_STUB.h"
#endif
