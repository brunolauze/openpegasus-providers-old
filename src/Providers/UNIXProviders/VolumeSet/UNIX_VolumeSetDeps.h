
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolumeSetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolumeSetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolumeSetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolumeSetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolumeSetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolumeSetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolumeSetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolumeSetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolumeSetDeps_TRU64.h"
#else
#	include "UNIX_VolumeSetDeps_STUB.h"
#endif
