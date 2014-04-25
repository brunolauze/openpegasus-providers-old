
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtocolControllerForUnitPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtocolControllerForUnitPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtocolControllerForUnitPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtocolControllerForUnitPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtocolControllerForUnitPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtocolControllerForUnitPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtocolControllerForUnitPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtocolControllerForUnitPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtocolControllerForUnitPrivate_TRU64.h"
#else
#	include "UNIX_ProtocolControllerForUnitPrivate_STUB.h"
#endif
