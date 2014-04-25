
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeadTailDropQueueBindingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeadTailDropQueueBindingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeadTailDropQueueBindingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeadTailDropQueueBindingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeadTailDropQueueBindingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeadTailDropQueueBindingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeadTailDropQueueBindingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeadTailDropQueueBindingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeadTailDropQueueBindingPrivate_TRU64.h"
#else
#	include "UNIX_HeadTailDropQueueBindingPrivate_STUB.h"
#endif
