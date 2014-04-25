
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SDSLModemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SDSLModemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SDSLModemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SDSLModemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SDSLModemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SDSLModemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SDSLModemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SDSLModemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SDSLModemPrivate_TRU64.h"
#else
#	include "UNIX_SDSLModemPrivate_STUB.h"
#endif
