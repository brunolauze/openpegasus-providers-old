
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BufferPoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BufferPoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BufferPoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BufferPoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BufferPoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BufferPoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BufferPoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BufferPoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BufferPoolDeps_TRU64.h"
#else
#	include "UNIX_BufferPoolDeps_STUB.h"
#endif
