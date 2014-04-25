
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FlatPanelPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FlatPanelPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FlatPanelPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FlatPanelPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FlatPanelPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FlatPanelPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FlatPanelPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FlatPanelPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FlatPanelPrivate_TRU64.h"
#else
#	include "UNIX_FlatPanelPrivate_STUB.h"
#endif
