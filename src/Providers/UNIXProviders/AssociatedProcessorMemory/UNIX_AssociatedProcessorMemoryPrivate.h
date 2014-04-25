
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedProcessorMemoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedProcessorMemoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedProcessorMemoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedProcessorMemoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedProcessorMemoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedProcessorMemoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedProcessorMemoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedProcessorMemoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedProcessorMemoryPrivate_TRU64.h"
#else
#	include "UNIX_AssociatedProcessorMemoryPrivate_STUB.h"
#endif
