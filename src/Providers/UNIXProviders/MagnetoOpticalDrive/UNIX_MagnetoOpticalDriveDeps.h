
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MagnetoOpticalDriveDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MagnetoOpticalDriveDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MagnetoOpticalDriveDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MagnetoOpticalDriveDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MagnetoOpticalDriveDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MagnetoOpticalDriveDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MagnetoOpticalDriveDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MagnetoOpticalDriveDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MagnetoOpticalDriveDeps_TRU64.h"
#else
#	include "UNIX_MagnetoOpticalDriveDeps_STUB.h"
#endif
