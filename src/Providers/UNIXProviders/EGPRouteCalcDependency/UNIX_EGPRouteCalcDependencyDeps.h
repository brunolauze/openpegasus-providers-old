
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EGPRouteCalcDependencyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EGPRouteCalcDependencyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EGPRouteCalcDependencyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EGPRouteCalcDependencyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EGPRouteCalcDependencyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EGPRouteCalcDependencyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EGPRouteCalcDependencyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EGPRouteCalcDependencyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EGPRouteCalcDependencyDeps_TRU64.h"
#else
#	include "UNIX_EGPRouteCalcDependencyDeps_STUB.h"
#endif
