
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtocolControllerForPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtocolControllerForPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtocolControllerForPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtocolControllerForPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtocolControllerForPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtocolControllerForPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtocolControllerForPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtocolControllerForPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtocolControllerForPortDeps_TRU64.h"
#else
#	include "UNIX_ProtocolControllerForPortDeps_STUB.h"
#endif
