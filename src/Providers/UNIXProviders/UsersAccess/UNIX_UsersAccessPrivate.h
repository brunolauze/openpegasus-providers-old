
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UsersAccessPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UsersAccessPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UsersAccessPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UsersAccessPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UsersAccessPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UsersAccessPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UsersAccessPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UsersAccessPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UsersAccessPrivate_TRU64.h"
#else
#	include "UNIX_UsersAccessPrivate_STUB.h"
#endif
