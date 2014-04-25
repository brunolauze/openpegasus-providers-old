
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnimodemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnimodemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnimodemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnimodemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnimodemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnimodemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnimodemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnimodemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnimodemDeps_TRU64.h"
#else
#	include "UNIX_UnimodemDeps_STUB.h"
#endif
