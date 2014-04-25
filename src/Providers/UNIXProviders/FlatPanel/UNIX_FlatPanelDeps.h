
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FlatPanelDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FlatPanelDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FlatPanelDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FlatPanelDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FlatPanelDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FlatPanelDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FlatPanelDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FlatPanelDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FlatPanelDeps_TRU64.h"
#else
#	include "UNIX_FlatPanelDeps_STUB.h"
#endif
