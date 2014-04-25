
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPProtocolEndpointPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPProtocolEndpointPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPProtocolEndpointPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPProtocolEndpointPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPProtocolEndpointPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPProtocolEndpointPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPProtocolEndpointPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPProtocolEndpointPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPProtocolEndpointPrivate_TRU64.h"
#else
#	include "UNIX_BGPProtocolEndpointPrivate_STUB.h"
#endif
