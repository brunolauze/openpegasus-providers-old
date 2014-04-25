
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WeightedREDDropperServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WeightedREDDropperServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WeightedREDDropperServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WeightedREDDropperServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WeightedREDDropperServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WeightedREDDropperServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WeightedREDDropperServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WeightedREDDropperServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WeightedREDDropperServiceDeps_TRU64.h"
#else
#	include "UNIX_WeightedREDDropperServiceDeps_STUB.h"
#endif
