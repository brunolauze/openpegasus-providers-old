
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SuppliesPowerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SuppliesPowerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SuppliesPowerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SuppliesPowerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SuppliesPowerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SuppliesPowerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SuppliesPowerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SuppliesPowerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SuppliesPowerPrivate_TRU64.h"
#else
#	include "UNIX_SuppliesPowerPrivate_STUB.h"
#endif
