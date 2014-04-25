
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UsersAccessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UsersAccessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UsersAccessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UsersAccessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UsersAccessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UsersAccessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UsersAccessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UsersAccessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UsersAccessDeps_TRU64.h"
#else
#	include "UNIX_UsersAccessDeps_STUB.h"
#endif
