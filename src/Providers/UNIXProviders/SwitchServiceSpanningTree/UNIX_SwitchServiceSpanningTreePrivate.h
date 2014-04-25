
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchServiceSpanningTreePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchServiceSpanningTreePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchServiceSpanningTreePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchServiceSpanningTreePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchServiceSpanningTreePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchServiceSpanningTreePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchServiceSpanningTreePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchServiceSpanningTreePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchServiceSpanningTreePrivate_TRU64.h"
#else
#	include "UNIX_SwitchServiceSpanningTreePrivate_STUB.h"
#endif
