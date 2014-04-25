
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchServiceVLANPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchServiceVLANPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchServiceVLANPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchServiceVLANPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchServiceVLANPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchServiceVLANPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchServiceVLANPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchServiceVLANPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchServiceVLANPrivate_TRU64.h"
#else
#	include "UNIX_SwitchServiceVLANPrivate_STUB.h"
#endif
