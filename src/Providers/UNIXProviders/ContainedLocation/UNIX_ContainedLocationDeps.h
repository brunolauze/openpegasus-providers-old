
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedLocationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedLocationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedLocationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedLocationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedLocationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedLocationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedLocationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedLocationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedLocationDeps_TRU64.h"
#else
#	include "UNIX_ContainedLocationDeps_STUB.h"
#endif
