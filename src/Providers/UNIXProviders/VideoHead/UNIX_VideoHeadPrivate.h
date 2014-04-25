
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoHeadPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoHeadPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoHeadPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoHeadPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoHeadPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoHeadPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoHeadPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoHeadPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoHeadPrivate_TRU64.h"
#else
#	include "UNIX_VideoHeadPrivate_STUB.h"
#endif
