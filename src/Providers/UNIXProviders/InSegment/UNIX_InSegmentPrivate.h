
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InSegmentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InSegmentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InSegmentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InSegmentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InSegmentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InSegmentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InSegmentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InSegmentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InSegmentPrivate_TRU64.h"
#else
#	include "UNIX_InSegmentPrivate_STUB.h"
#endif
