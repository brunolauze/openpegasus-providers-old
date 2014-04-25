
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_TRU64.h"
#else
#	include "UNIX_TransparentBridgingDynamicForwardingPrivate_STUB.h"
#endif
