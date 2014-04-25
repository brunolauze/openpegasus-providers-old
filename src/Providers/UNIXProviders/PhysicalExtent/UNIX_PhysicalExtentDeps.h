
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalExtentDeps_TRU64.h"
#else
#	include "UNIX_PhysicalExtentDeps_STUB.h"
#endif
