
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PCIBridgeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PCIBridgeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PCIBridgeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PCIBridgeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PCIBridgeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PCIBridgeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PCIBridgeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PCIBridgeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PCIBridgeDeps_TRU64.h"
#else
#	include "UNIX_PCIBridgeDeps_STUB.h"
#endif
