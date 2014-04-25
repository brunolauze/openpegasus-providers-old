
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstMethodCallDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstMethodCallDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstMethodCallDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstMethodCallDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstMethodCallDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstMethodCallDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstMethodCallDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstMethodCallDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstMethodCallDeps_TRU64.h"
#else
#	include "UNIX_InstMethodCallDeps_STUB.h"
#endif
