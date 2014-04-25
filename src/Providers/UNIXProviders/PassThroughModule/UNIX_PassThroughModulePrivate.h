
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PassThroughModulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PassThroughModulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PassThroughModulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PassThroughModulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PassThroughModulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PassThroughModulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PassThroughModulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PassThroughModulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PassThroughModulePrivate_TRU64.h"
#else
#	include "UNIX_PassThroughModulePrivate_STUB.h"
#endif
