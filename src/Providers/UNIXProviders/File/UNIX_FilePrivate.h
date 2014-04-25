
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilePrivate_TRU64.h"
#else
#	include "UNIX_FilePrivate_STUB.h"
#endif
