
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TimeZoneDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TimeZoneDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TimeZoneDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TimeZoneDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TimeZoneDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TimeZoneDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TimeZoneDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TimeZoneDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TimeZoneDeps_TRU64.h"
#else
#	include "UNIX_TimeZoneDeps_STUB.h"
#endif
