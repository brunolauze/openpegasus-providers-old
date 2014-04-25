
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransparentBridgingStaticForwardingDeps_TRU64.h"
#else
#	include "UNIX_TransparentBridgingStaticForwardingDeps_STUB.h"
#endif
