
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessPrivate_TRU64.h"
#else
#	include "UNIX_ProcessPrivate_STUB.h"
#endif
