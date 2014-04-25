
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OutboundVLANDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OutboundVLANDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OutboundVLANDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OutboundVLANDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OutboundVLANDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OutboundVLANDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OutboundVLANDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OutboundVLANDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OutboundVLANDeps_TRU64.h"
#else
#	include "UNIX_OutboundVLANDeps_STUB.h"
#endif
