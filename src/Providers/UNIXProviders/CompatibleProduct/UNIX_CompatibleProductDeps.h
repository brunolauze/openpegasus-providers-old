
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompatibleProductDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompatibleProductDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompatibleProductDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompatibleProductDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompatibleProductDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompatibleProductDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompatibleProductDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompatibleProductDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompatibleProductDeps_TRU64.h"
#else
#	include "UNIX_CompatibleProductDeps_STUB.h"
#endif
