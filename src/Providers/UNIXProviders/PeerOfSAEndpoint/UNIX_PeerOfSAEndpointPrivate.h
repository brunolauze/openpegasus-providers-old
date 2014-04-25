
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PeerOfSAEndpointPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PeerOfSAEndpointPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PeerOfSAEndpointPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PeerOfSAEndpointPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PeerOfSAEndpointPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PeerOfSAEndpointPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PeerOfSAEndpointPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PeerOfSAEndpointPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PeerOfSAEndpointPrivate_TRU64.h"
#else
#	include "UNIX_PeerOfSAEndpointPrivate_STUB.h"
#endif
