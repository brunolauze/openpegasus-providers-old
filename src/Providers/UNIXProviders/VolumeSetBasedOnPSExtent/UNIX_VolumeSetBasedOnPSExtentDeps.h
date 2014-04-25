
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_TRU64.h"
#else
#	include "UNIX_VolumeSetBasedOnPSExtentDeps_STUB.h"
#endif
