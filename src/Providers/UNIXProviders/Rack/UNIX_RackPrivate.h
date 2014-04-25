
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RackPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RackPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RackPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RackPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RackPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RackPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RackPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RackPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RackPrivate_TRU64.h"
#else
#	include "UNIX_RackPrivate_STUB.h"
#endif
