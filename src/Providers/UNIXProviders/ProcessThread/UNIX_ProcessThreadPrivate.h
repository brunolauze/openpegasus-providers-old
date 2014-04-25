
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessThreadPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessThreadPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessThreadPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessThreadPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessThreadPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessThreadPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessThreadPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessThreadPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessThreadPrivate_TRU64.h"
#else
#	include "UNIX_ProcessThreadPrivate_STUB.h"
#endif
