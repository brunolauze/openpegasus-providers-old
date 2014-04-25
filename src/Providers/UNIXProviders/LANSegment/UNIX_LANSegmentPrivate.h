
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LANSegmentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LANSegmentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LANSegmentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LANSegmentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LANSegmentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LANSegmentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LANSegmentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LANSegmentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LANSegmentPrivate_TRU64.h"
#else
#	include "UNIX_LANSegmentPrivate_STUB.h"
#endif
