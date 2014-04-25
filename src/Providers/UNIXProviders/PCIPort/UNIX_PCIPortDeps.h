
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PCIPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PCIPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PCIPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PCIPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PCIPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PCIPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PCIPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PCIPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PCIPortDeps_TRU64.h"
#else
#	include "UNIX_PCIPortDeps_STUB.h"
#endif
