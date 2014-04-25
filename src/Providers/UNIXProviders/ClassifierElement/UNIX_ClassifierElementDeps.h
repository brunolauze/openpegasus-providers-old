
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierElementDeps_TRU64.h"
#else
#	include "UNIX_ClassifierElementDeps_STUB.h"
#endif
