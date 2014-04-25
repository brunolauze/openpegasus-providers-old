
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InboundVLANDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InboundVLANDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InboundVLANDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InboundVLANDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InboundVLANDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InboundVLANDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InboundVLANDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InboundVLANDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InboundVLANDeps_TRU64.h"
#else
#	include "UNIX_InboundVLANDeps_STUB.h"
#endif
