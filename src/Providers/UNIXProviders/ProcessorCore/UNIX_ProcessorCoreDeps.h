
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessorCoreDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessorCoreDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessorCoreDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessorCoreDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessorCoreDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessorCoreDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessorCoreDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessorCoreDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessorCoreDeps_TRU64.h"
#else
#	include "UNIX_ProcessorCoreDeps_STUB.h"
#endif
