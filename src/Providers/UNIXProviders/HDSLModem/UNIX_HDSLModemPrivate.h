
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HDSLModemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HDSLModemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HDSLModemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HDSLModemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HDSLModemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HDSLModemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HDSLModemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HDSLModemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HDSLModemPrivate_TRU64.h"
#else
#	include "UNIX_HDSLModemPrivate_STUB.h"
#endif
