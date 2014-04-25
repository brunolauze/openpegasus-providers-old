
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_GroupPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_GroupPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_GroupPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_GroupPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_GroupPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_GroupPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_GroupPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_GroupPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_GroupPrivate_TRU64.h"
#else
#	include "UNIX_GroupPrivate_STUB.h"
#endif
