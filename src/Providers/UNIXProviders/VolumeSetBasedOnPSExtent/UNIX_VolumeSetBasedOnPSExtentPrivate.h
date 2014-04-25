
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_TRU64.h"
#else
#	include "UNIX_VolumeSetBasedOnPSExtentPrivate_STUB.h"
#endif
