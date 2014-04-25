
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UseOfMessageLogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UseOfMessageLogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UseOfMessageLogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UseOfMessageLogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UseOfMessageLogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UseOfMessageLogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UseOfMessageLogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UseOfMessageLogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UseOfMessageLogPrivate_TRU64.h"
#else
#	include "UNIX_UseOfMessageLogPrivate_STUB.h"
#endif
