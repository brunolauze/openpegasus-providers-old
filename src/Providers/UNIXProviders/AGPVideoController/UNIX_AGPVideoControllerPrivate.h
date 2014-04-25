
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AGPVideoControllerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AGPVideoControllerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AGPVideoControllerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AGPVideoControllerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AGPVideoControllerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AGPVideoControllerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AGPVideoControllerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AGPVideoControllerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AGPVideoControllerPrivate_TRU64.h"
#else
#	include "UNIX_AGPVideoControllerPrivate_STUB.h"
#endif
