
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueryCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueryCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueryCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueryCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueryCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueryCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueryCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueryCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueryCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_QueryCapabilitiesDeps_STUB.h"
#endif
