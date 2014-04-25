
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrderedDependencyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrderedDependencyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrderedDependencyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrderedDependencyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrderedDependencyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrderedDependencyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrderedDependencyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrderedDependencyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrderedDependencyPrivate_TRU64.h"
#else
#	include "UNIX_OrderedDependencyPrivate_STUB.h"
#endif
