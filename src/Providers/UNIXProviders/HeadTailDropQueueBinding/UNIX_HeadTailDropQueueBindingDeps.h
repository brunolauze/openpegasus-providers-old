
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeadTailDropQueueBindingDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeadTailDropQueueBindingDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeadTailDropQueueBindingDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeadTailDropQueueBindingDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeadTailDropQueueBindingDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeadTailDropQueueBindingDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeadTailDropQueueBindingDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeadTailDropQueueBindingDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeadTailDropQueueBindingDeps_TRU64.h"
#else
#	include "UNIX_HeadTailDropQueueBindingDeps_STUB.h"
#endif
