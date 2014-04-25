
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseSegmentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseSegmentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseSegmentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseSegmentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseSegmentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseSegmentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseSegmentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseSegmentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseSegmentDeps_TRU64.h"
#else
#	include "UNIX_DatabaseSegmentDeps_STUB.h"
#endif
