
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EGPRouteCalcDependencyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EGPRouteCalcDependencyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EGPRouteCalcDependencyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EGPRouteCalcDependencyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EGPRouteCalcDependencyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EGPRouteCalcDependencyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EGPRouteCalcDependencyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EGPRouteCalcDependencyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EGPRouteCalcDependencyPrivate_TRU64.h"
#else
#	include "UNIX_EGPRouteCalcDependencyPrivate_STUB.h"
#endif
