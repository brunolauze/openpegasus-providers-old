
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchServiceSpanningTreeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchServiceSpanningTreeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchServiceSpanningTreeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchServiceSpanningTreeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchServiceSpanningTreeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchServiceSpanningTreeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchServiceSpanningTreeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchServiceSpanningTreeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchServiceSpanningTreeDeps_TRU64.h"
#else
#	include "UNIX_SwitchServiceSpanningTreeDeps_STUB.h"
#endif
