
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DynamicForwardingEntryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DynamicForwardingEntryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DynamicForwardingEntryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DynamicForwardingEntryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DynamicForwardingEntryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DynamicForwardingEntryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DynamicForwardingEntryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DynamicForwardingEntryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DynamicForwardingEntryPrivate_TRU64.h"
#else
#	include "UNIX_DynamicForwardingEntryPrivate_STUB.h"
#endif
