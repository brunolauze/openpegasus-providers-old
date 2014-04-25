
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPPeerGroupPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPPeerGroupPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPPeerGroupPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPPeerGroupPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPPeerGroupPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPPeerGroupPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPPeerGroupPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPPeerGroupPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPPeerGroupPrivate_TRU64.h"
#else
#	include "UNIX_BGPPeerGroupPrivate_STUB.h"
#endif
