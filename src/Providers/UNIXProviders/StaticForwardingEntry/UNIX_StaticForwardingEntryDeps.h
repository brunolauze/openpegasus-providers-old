
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StaticForwardingEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StaticForwardingEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StaticForwardingEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StaticForwardingEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StaticForwardingEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StaticForwardingEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StaticForwardingEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StaticForwardingEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StaticForwardingEntryDeps_TRU64.h"
#else
#	include "UNIX_StaticForwardingEntryDeps_STUB.h"
#endif
