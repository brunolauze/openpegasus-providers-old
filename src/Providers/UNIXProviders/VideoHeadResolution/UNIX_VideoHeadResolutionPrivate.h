
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoHeadResolutionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoHeadResolutionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoHeadResolutionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoHeadResolutionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoHeadResolutionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoHeadResolutionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoHeadResolutionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoHeadResolutionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoHeadResolutionPrivate_TRU64.h"
#else
#	include "UNIX_VideoHeadResolutionPrivate_STUB.h"
#endif
