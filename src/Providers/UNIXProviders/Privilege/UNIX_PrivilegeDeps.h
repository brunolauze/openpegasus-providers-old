
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrivilegeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrivilegeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrivilegeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrivilegeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrivilegeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrivilegeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrivilegeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrivilegeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrivilegeDeps_TRU64.h"
#else
#	include "UNIX_PrivilegeDeps_STUB.h"
#endif
