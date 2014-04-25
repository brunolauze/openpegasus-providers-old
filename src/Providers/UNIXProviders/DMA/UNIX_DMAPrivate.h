
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DMAPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DMAPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DMAPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DMAPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DMAPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DMAPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DMAPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DMAPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DMAPrivate_TRU64.h"
#else
#	include "UNIX_DMAPrivate_STUB.h"
#endif
