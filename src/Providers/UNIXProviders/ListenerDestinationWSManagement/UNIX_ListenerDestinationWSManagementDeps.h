
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ListenerDestinationWSManagementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ListenerDestinationWSManagementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ListenerDestinationWSManagementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ListenerDestinationWSManagementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ListenerDestinationWSManagementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ListenerDestinationWSManagementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ListenerDestinationWSManagementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ListenerDestinationWSManagementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ListenerDestinationWSManagementDeps_TRU64.h"
#else
#	include "UNIX_ListenerDestinationWSManagementDeps_STUB.h"
#endif
