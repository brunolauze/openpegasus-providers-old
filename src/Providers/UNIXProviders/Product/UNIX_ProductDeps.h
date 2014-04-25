
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductDeps_TRU64.h"
#else
#	include "UNIX_ProductDeps_STUB.h"
#endif
