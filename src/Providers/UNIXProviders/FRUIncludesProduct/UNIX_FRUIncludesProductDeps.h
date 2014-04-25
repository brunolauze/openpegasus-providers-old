
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUIncludesProductDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUIncludesProductDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUIncludesProductDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUIncludesProductDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUIncludesProductDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUIncludesProductDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUIncludesProductDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUIncludesProductDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUIncludesProductDeps_TRU64.h"
#else
#	include "UNIX_FRUIncludesProductDeps_STUB.h"
#endif
