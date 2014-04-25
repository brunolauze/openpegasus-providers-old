
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchPortStaticForwardingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchPortStaticForwardingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchPortStaticForwardingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchPortStaticForwardingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchPortStaticForwardingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchPortStaticForwardingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchPortStaticForwardingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchPortStaticForwardingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchPortStaticForwardingPrivate_TRU64.h"
#else
#	include "UNIX_SwitchPortStaticForwardingPrivate_STUB.h"
#endif
