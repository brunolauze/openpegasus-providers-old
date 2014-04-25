
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessorDeps_TRU64.h"
#else
#	include "UNIX_ProcessorDeps_STUB.h"
#endif
