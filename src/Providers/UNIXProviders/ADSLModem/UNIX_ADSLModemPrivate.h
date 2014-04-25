
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ADSLModemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ADSLModemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ADSLModemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ADSLModemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ADSLModemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ADSLModemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ADSLModemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ADSLModemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ADSLModemPrivate_TRU64.h"
#else
#	include "UNIX_ADSLModemPrivate_STUB.h"
#endif
