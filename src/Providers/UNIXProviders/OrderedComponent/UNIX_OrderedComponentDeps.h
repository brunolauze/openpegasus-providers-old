
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrderedComponentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrderedComponentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrderedComponentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrderedComponentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrderedComponentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrderedComponentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrderedComponentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrderedComponentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrderedComponentDeps_TRU64.h"
#else
#	include "UNIX_OrderedComponentDeps_STUB.h"
#endif
