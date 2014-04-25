
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstCreationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstCreationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstCreationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstCreationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstCreationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstCreationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstCreationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstCreationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstCreationDeps_TRU64.h"
#else
#	include "UNIX_InstCreationDeps_STUB.h"
#endif
