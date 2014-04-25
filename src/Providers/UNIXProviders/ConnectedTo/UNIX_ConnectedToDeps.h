
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConnectedToDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConnectedToDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConnectedToDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConnectedToDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConnectedToDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConnectedToDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConnectedToDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConnectedToDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConnectedToDeps_TRU64.h"
#else
#	include "UNIX_ConnectedToDeps_STUB.h"
#endif
