
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CardPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CardPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CardPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CardPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CardPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CardPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CardPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CardPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CardPrivate_TRU64.h"
#else
#	include "UNIX_CardPrivate_STUB.h"
#endif
