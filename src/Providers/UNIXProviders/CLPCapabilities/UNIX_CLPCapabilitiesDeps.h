
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CLPCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CLPCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CLPCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CLPCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CLPCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CLPCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CLPCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CLPCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CLPCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_CLPCapabilitiesDeps_STUB.h"
#endif
