
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_TRU64.h"
#else
#	include "UNIX_CommMechanismForObjectManagerAdapterDeps_STUB.h"
#endif
