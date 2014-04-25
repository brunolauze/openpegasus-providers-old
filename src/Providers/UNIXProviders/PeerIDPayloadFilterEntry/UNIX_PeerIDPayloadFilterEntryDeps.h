
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PeerIDPayloadFilterEntryDeps_TRU64.h"
#else
#	include "UNIX_PeerIDPayloadFilterEntryDeps_STUB.h"
#endif
