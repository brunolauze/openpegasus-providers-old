
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtectedExtentBasedOnPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtectedExtentBasedOnPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtectedExtentBasedOnPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtectedExtentBasedOnPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtectedExtentBasedOnPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtectedExtentBasedOnPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtectedExtentBasedOnPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtectedExtentBasedOnPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtectedExtentBasedOnPrivate_TRU64.h"
#else
#	include "UNIX_ProtectedExtentBasedOnPrivate_STUB.h"
#endif
