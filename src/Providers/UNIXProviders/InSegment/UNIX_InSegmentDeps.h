
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InSegmentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InSegmentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InSegmentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InSegmentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InSegmentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InSegmentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InSegmentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InSegmentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InSegmentDeps_TRU64.h"
#else
#	include "UNIX_InSegmentDeps_STUB.h"
#endif
