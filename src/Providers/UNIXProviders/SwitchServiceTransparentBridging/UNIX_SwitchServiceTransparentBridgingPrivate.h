
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_TRU64.h"
#else
#	include "UNIX_SwitchServiceTransparentBridgingPrivate_STUB.h"
#endif
