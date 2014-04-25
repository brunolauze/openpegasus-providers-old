
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommMechanismForManagerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommMechanismForManagerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommMechanismForManagerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommMechanismForManagerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommMechanismForManagerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommMechanismForManagerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommMechanismForManagerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommMechanismForManagerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommMechanismForManagerPrivate_TRU64.h"
#else
#	include "UNIX_CommMechanismForManagerPrivate_STUB.h"
#endif
