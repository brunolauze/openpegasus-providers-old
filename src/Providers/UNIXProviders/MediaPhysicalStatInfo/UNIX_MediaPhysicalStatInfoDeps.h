
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaPhysicalStatInfoDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaPhysicalStatInfoDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaPhysicalStatInfoDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaPhysicalStatInfoDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaPhysicalStatInfoDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaPhysicalStatInfoDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaPhysicalStatInfoDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaPhysicalStatInfoDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaPhysicalStatInfoDeps_TRU64.h"
#else
#	include "UNIX_MediaPhysicalStatInfoDeps_STUB.h"
#endif
