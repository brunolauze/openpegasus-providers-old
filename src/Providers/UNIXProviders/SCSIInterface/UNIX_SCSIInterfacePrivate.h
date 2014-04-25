
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIInterfacePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIInterfacePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIInterfacePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIInterfacePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIInterfacePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIInterfacePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIInterfacePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIInterfacePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIInterfacePrivate_TRU64.h"
#else
#	include "UNIX_SCSIInterfacePrivate_STUB.h"
#endif
