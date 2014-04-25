
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassCreationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassCreationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassCreationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassCreationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassCreationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassCreationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassCreationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassCreationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassCreationDeps_TRU64.h"
#else
#	include "UNIX_ClassCreationDeps_STUB.h"
#endif
