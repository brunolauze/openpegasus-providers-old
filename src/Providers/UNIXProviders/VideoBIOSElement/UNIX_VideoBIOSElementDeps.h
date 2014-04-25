
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoBIOSElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoBIOSElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoBIOSElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoBIOSElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoBIOSElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoBIOSElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoBIOSElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoBIOSElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoBIOSElementDeps_TRU64.h"
#else
#	include "UNIX_VideoBIOSElementDeps_STUB.h"
#endif
