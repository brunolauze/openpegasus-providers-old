
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SuppliesPowerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SuppliesPowerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SuppliesPowerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SuppliesPowerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SuppliesPowerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SuppliesPowerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SuppliesPowerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SuppliesPowerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SuppliesPowerDeps_TRU64.h"
#else
#	include "UNIX_SuppliesPowerDeps_STUB.h"
#endif
