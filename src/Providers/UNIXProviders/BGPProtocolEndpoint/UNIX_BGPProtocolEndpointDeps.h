
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPProtocolEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPProtocolEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPProtocolEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPProtocolEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPProtocolEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPProtocolEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPProtocolEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPProtocolEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPProtocolEndpointDeps_TRU64.h"
#else
#	include "UNIX_BGPProtocolEndpointDeps_STUB.h"
#endif
