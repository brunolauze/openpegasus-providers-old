
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocatedDMAPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocatedDMAPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocatedDMAPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocatedDMAPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocatedDMAPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocatedDMAPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocatedDMAPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocatedDMAPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocatedDMAPrivate_TRU64.h"
#else
#	include "UNIX_AllocatedDMAPrivate_STUB.h"
#endif
