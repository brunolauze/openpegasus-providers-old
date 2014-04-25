
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MagnetoOpticalDrivePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MagnetoOpticalDrivePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MagnetoOpticalDrivePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MagnetoOpticalDrivePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MagnetoOpticalDrivePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MagnetoOpticalDrivePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MagnetoOpticalDrivePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MagnetoOpticalDrivePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MagnetoOpticalDrivePrivate_TRU64.h"
#else
#	include "UNIX_MagnetoOpticalDrivePrivate_STUB.h"
#endif
