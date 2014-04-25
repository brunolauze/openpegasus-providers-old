
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedProcessorMemoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedProcessorMemoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedProcessorMemoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedProcessorMemoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedProcessorMemoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedProcessorMemoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedProcessorMemoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedProcessorMemoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedProcessorMemoryDeps_TRU64.h"
#else
#	include "UNIX_AssociatedProcessorMemoryDeps_STUB.h"
#endif
