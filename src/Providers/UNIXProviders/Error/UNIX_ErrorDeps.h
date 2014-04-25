
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ErrorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ErrorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ErrorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ErrorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ErrorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ErrorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ErrorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ErrorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ErrorDeps_TRU64.h"
#else
#	include "UNIX_ErrorDeps_STUB.h"
#endif
