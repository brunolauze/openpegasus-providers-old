
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DependencyContextPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DependencyContextPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DependencyContextPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DependencyContextPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DependencyContextPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DependencyContextPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DependencyContextPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DependencyContextPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DependencyContextPrivate_TRU64.h"
#else
#	include "UNIX_DependencyContextPrivate_STUB.h"
#endif
