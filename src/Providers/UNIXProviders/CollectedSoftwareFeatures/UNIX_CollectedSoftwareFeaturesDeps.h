
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectedSoftwareFeaturesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectedSoftwareFeaturesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectedSoftwareFeaturesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectedSoftwareFeaturesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectedSoftwareFeaturesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectedSoftwareFeaturesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectedSoftwareFeaturesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectedSoftwareFeaturesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectedSoftwareFeaturesDeps_TRU64.h"
#else
#	include "UNIX_CollectedSoftwareFeaturesDeps_STUB.h"
#endif
