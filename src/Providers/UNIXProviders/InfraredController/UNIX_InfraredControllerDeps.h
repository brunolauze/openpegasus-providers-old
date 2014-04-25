
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InfraredControllerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InfraredControllerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InfraredControllerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InfraredControllerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InfraredControllerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InfraredControllerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InfraredControllerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InfraredControllerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InfraredControllerDeps_TRU64.h"
#else
#	include "UNIX_InfraredControllerDeps_STUB.h"
#endif
