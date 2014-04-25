
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ZoneDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ZoneDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ZoneDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ZoneDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ZoneDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ZoneDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ZoneDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ZoneDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ZoneDeps_TRU64.h"
#else
#	include "UNIX_ZoneDeps_STUB.h"
#endif
