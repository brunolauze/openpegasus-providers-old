
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_GroupDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_GroupDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_GroupDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_GroupDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_GroupDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_GroupDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_GroupDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_GroupDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_GroupDeps_TRU64.h"
#else
#	include "UNIX_GroupDeps_STUB.h"
#endif
