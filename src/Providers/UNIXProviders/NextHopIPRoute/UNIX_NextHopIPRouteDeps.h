
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextHopIPRouteDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextHopIPRouteDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextHopIPRouteDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextHopIPRouteDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextHopIPRouteDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextHopIPRouteDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextHopIPRouteDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextHopIPRouteDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextHopIPRouteDeps_TRU64.h"
#else
#	include "UNIX_NextHopIPRouteDeps_STUB.h"
#endif
