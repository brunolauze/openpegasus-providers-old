
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ListenerDestinationCIMXMLDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ListenerDestinationCIMXMLDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ListenerDestinationCIMXMLDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ListenerDestinationCIMXMLDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ListenerDestinationCIMXMLDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ListenerDestinationCIMXMLDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ListenerDestinationCIMXMLDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ListenerDestinationCIMXMLDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ListenerDestinationCIMXMLDeps_TRU64.h"
#else
#	include "UNIX_ListenerDestinationCIMXMLDeps_STUB.h"
#endif
