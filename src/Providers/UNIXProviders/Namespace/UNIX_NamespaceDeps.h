
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NamespaceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NamespaceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NamespaceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NamespaceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NamespaceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NamespaceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NamespaceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NamespaceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NamespaceDeps_TRU64.h"
#else
#	include "UNIX_NamespaceDeps_STUB.h"
#endif
