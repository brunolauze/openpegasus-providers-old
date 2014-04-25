
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoControllerResolutionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoControllerResolutionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoControllerResolutionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoControllerResolutionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoControllerResolutionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoControllerResolutionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoControllerResolutionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoControllerResolutionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoControllerResolutionPrivate_TRU64.h"
#else
#	include "UNIX_VideoControllerResolutionPrivate_STUB.h"
#endif
