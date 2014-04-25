
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_TRU64.h"
#else
#	include "UNIX_SoftwareFeatureServiceImplementationDeps_STUB.h"
#endif
