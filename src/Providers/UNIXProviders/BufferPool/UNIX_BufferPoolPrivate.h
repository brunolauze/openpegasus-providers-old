
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BufferPoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BufferPoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BufferPoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BufferPoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BufferPoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BufferPoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BufferPoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BufferPoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BufferPoolPrivate_TRU64.h"
#else
#	include "UNIX_BufferPoolPrivate_STUB.h"
#endif
