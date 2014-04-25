
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PCIBridgePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PCIBridgePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PCIBridgePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PCIBridgePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PCIBridgePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PCIBridgePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PCIBridgePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PCIBridgePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PCIBridgePrivate_TRU64.h"
#else
#	include "UNIX_PCIBridgePrivate_STUB.h"
#endif
