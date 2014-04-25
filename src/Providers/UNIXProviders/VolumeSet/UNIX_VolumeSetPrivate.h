
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolumeSetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolumeSetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolumeSetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolumeSetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolumeSetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolumeSetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolumeSetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolumeSetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolumeSetPrivate_TRU64.h"
#else
#	include "UNIX_VolumeSetPrivate_STUB.h"
#endif
