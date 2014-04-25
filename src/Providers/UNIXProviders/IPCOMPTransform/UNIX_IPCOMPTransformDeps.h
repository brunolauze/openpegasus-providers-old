
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPCOMPTransformDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPCOMPTransformDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPCOMPTransformDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPCOMPTransformDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPCOMPTransformDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPCOMPTransformDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPCOMPTransformDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPCOMPTransformDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPCOMPTransformDeps_TRU64.h"
#else
#	include "UNIX_IPCOMPTransformDeps_STUB.h"
#endif
