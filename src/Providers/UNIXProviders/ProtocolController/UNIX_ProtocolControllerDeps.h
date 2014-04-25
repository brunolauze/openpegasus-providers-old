
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtocolControllerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtocolControllerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtocolControllerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtocolControllerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtocolControllerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtocolControllerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtocolControllerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtocolControllerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtocolControllerDeps_TRU64.h"
#else
#	include "UNIX_ProtocolControllerDeps_STUB.h"
#endif
