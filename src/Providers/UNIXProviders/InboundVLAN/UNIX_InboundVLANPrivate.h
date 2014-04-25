
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InboundVLANPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InboundVLANPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InboundVLANPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InboundVLANPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InboundVLANPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InboundVLANPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InboundVLANPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InboundVLANPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InboundVLANPrivate_TRU64.h"
#else
#	include "UNIX_InboundVLANPrivate_STUB.h"
#endif
