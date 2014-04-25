
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EthernetPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EthernetPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EthernetPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EthernetPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EthernetPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EthernetPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EthernetPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EthernetPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EthernetPortDeps_TRU64.h"
#else
#	include "UNIX_EthernetPortDeps_STUB.h"
#endif
