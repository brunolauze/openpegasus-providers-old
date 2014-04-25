
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IDEControllerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IDEControllerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IDEControllerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IDEControllerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IDEControllerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IDEControllerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IDEControllerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IDEControllerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IDEControllerDeps_TRU64.h"
#else
#	include "UNIX_IDEControllerDeps_STUB.h"
#endif
