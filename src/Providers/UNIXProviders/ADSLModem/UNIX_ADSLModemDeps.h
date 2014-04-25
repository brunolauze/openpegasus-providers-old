
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ADSLModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ADSLModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ADSLModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ADSLModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ADSLModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ADSLModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ADSLModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ADSLModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ADSLModemDeps_TRU64.h"
#else
#	include "UNIX_ADSLModemDeps_STUB.h"
#endif
