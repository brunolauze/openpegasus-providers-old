
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DockedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DockedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DockedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DockedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DockedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DockedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DockedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DockedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DockedDeps_TRU64.h"
#else
#	include "UNIX_DockedDeps_STUB.h"
#endif
