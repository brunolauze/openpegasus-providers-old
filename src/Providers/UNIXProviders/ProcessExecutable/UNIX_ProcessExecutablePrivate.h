
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessExecutablePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessExecutablePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessExecutablePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessExecutablePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessExecutablePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessExecutablePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessExecutablePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessExecutablePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessExecutablePrivate_TRU64.h"
#else
#	include "UNIX_ProcessExecutablePrivate_STUB.h"
#endif
