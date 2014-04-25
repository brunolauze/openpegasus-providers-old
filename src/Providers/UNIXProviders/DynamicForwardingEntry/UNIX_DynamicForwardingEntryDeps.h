
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DynamicForwardingEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DynamicForwardingEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DynamicForwardingEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DynamicForwardingEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DynamicForwardingEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DynamicForwardingEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DynamicForwardingEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DynamicForwardingEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DynamicForwardingEntryDeps_TRU64.h"
#else
#	include "UNIX_DynamicForwardingEntryDeps_STUB.h"
#endif
