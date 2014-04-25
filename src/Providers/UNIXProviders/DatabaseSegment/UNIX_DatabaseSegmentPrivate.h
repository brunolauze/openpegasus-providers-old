
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseSegmentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseSegmentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseSegmentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseSegmentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseSegmentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseSegmentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseSegmentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseSegmentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseSegmentPrivate_TRU64.h"
#else
#	include "UNIX_DatabaseSegmentPrivate_STUB.h"
#endif
