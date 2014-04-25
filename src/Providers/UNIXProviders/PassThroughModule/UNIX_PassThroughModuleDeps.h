
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PassThroughModuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PassThroughModuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PassThroughModuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PassThroughModuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PassThroughModuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PassThroughModuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PassThroughModuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PassThroughModuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PassThroughModuleDeps_TRU64.h"
#else
#	include "UNIX_PassThroughModuleDeps_STUB.h"
#endif
