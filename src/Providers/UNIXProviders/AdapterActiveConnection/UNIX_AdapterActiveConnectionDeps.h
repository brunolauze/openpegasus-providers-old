
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdapterActiveConnectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdapterActiveConnectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdapterActiveConnectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdapterActiveConnectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdapterActiveConnectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdapterActiveConnectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdapterActiveConnectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdapterActiveConnectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdapterActiveConnectionDeps_TRU64.h"
#else
#	include "UNIX_AdapterActiveConnectionDeps_STUB.h"
#endif
