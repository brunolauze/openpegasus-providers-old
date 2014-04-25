
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintInterpreterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintInterpreterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintInterpreterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintInterpreterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintInterpreterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintInterpreterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintInterpreterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintInterpreterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintInterpreterPrivate_TRU64.h"
#else
#	include "UNIX_PrintInterpreterPrivate_STUB.h"
#endif
