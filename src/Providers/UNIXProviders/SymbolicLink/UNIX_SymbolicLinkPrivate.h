
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SymbolicLinkPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SymbolicLinkPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SymbolicLinkPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SymbolicLinkPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SymbolicLinkPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SymbolicLinkPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SymbolicLinkPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SymbolicLinkPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SymbolicLinkPrivate_TRU64.h"
#else
#	include "UNIX_SymbolicLinkPrivate_STUB.h"
#endif
