
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PExtentRedundancyComponentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PExtentRedundancyComponentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PExtentRedundancyComponentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PExtentRedundancyComponentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PExtentRedundancyComponentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PExtentRedundancyComponentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PExtentRedundancyComponentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PExtentRedundancyComponentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PExtentRedundancyComponentDeps_TRU64.h"
#else
#	include "UNIX_PExtentRedundancyComponentDeps_STUB.h"
#endif
