
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UseOfLogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UseOfLogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UseOfLogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UseOfLogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UseOfLogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UseOfLogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UseOfLogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UseOfLogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UseOfLogPrivate_TRU64.h"
#else
#	include "UNIX_UseOfLogPrivate_STUB.h"
#endif
