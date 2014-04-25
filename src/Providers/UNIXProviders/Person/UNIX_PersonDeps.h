
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PersonDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PersonDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PersonDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PersonDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PersonDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PersonDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PersonDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PersonDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PersonDeps_TRU64.h"
#else
#	include "UNIX_PersonDeps_STUB.h"
#endif
