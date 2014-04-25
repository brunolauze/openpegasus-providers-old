
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductServiceComponentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductServiceComponentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductServiceComponentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductServiceComponentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductServiceComponentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductServiceComponentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductServiceComponentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductServiceComponentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductServiceComponentDeps_TRU64.h"
#else
#	include "UNIX_ProductServiceComponentDeps_STUB.h"
#endif
