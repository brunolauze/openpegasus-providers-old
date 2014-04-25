
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkVLANPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkVLANPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkVLANPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkVLANPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkVLANPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkVLANPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkVLANPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkVLANPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkVLANPrivate_TRU64.h"
#else
#	include "UNIX_NetworkVLANPrivate_STUB.h"
#endif
