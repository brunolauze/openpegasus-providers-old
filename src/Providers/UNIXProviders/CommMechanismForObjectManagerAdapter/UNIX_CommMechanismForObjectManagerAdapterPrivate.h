
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_TRU64.h"
#else
#	include "UNIX_CommMechanismForObjectManagerAdapterPrivate_STUB.h"
#endif
