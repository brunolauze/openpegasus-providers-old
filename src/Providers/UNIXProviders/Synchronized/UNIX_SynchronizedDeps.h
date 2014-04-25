
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SynchronizedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SynchronizedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SynchronizedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SynchronizedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SynchronizedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SynchronizedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SynchronizedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SynchronizedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SynchronizedDeps_TRU64.h"
#else
#	include "UNIX_SynchronizedDeps_STUB.h"
#endif
