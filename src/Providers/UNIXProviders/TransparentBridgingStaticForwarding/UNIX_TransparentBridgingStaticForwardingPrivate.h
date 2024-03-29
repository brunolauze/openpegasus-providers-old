
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_TRU64.h"
#else
#	include "UNIX_TransparentBridgingStaticForwardingPrivate_STUB.h"
#endif
