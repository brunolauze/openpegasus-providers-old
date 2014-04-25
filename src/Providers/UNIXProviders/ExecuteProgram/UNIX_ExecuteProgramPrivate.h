
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExecuteProgramPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExecuteProgramPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExecuteProgramPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExecuteProgramPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExecuteProgramPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExecuteProgramPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExecuteProgramPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExecuteProgramPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExecuteProgramPrivate_TRU64.h"
#else
#	include "UNIX_ExecuteProgramPrivate_STUB.h"
#endif
