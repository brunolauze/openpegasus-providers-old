
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResidesOnExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResidesOnExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResidesOnExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResidesOnExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResidesOnExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResidesOnExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResidesOnExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResidesOnExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResidesOnExtentDeps_TRU64.h"
#else
#	include "UNIX_ResidesOnExtentDeps_STUB.h"
#endif
