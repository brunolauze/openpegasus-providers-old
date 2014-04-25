
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SparedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SparedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SparedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SparedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SparedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SparedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SparedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SparedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SparedPrivate_TRU64.h"
#else
#	include "UNIX_SparedPrivate_STUB.h"
#endif
