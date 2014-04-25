
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaPhysicalStatDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaPhysicalStatDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaPhysicalStatDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaPhysicalStatDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaPhysicalStatDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaPhysicalStatDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaPhysicalStatDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaPhysicalStatDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaPhysicalStatDataDeps_TRU64.h"
#else
#	include "UNIX_MediaPhysicalStatDataDeps_STUB.h"
#endif
