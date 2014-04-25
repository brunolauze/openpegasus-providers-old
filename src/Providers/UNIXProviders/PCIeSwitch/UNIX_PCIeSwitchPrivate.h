
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PCIeSwitchPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PCIeSwitchPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PCIeSwitchPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PCIeSwitchPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PCIeSwitchPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PCIeSwitchPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PCIeSwitchPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PCIeSwitchPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PCIeSwitchPrivate_TRU64.h"
#else
#	include "UNIX_PCIeSwitchPrivate_STUB.h"
#endif
