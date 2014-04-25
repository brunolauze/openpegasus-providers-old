
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintInputTrayDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintInputTrayDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintInputTrayDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintInputTrayDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintInputTrayDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintInputTrayDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintInputTrayDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintInputTrayDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintInputTrayDeps_TRU64.h"
#else
#	include "UNIX_PrintInputTrayDeps_STUB.h"
#endif
