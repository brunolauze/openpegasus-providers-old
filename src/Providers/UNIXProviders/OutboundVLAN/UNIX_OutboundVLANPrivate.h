
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OutboundVLANPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OutboundVLANPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OutboundVLANPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OutboundVLANPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OutboundVLANPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OutboundVLANPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OutboundVLANPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OutboundVLANPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OutboundVLANPrivate_TRU64.h"
#else
#	include "UNIX_OutboundVLANPrivate_STUB.h"
#endif
