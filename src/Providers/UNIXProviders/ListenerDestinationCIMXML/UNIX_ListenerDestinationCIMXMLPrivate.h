
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ListenerDestinationCIMXMLPrivate_TRU64.h"
#else
#	include "UNIX_ListenerDestinationCIMXMLPrivate_STUB.h"
#endif
