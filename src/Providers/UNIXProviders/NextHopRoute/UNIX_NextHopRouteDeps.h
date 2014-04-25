
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextHopRouteDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextHopRouteDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextHopRouteDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextHopRouteDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextHopRouteDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextHopRouteDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextHopRouteDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextHopRouteDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextHopRouteDeps_TRU64.h"
#else
#	include "UNIX_NextHopRouteDeps_STUB.h"
#endif
