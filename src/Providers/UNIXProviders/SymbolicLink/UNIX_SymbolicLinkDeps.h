
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SymbolicLinkDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SymbolicLinkDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SymbolicLinkDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SymbolicLinkDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SymbolicLinkDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SymbolicLinkDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SymbolicLinkDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SymbolicLinkDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SymbolicLinkDeps_TRU64.h"
#else
#	include "UNIX_SymbolicLinkDeps_STUB.h"
#endif
