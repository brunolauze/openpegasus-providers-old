
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommMechanismForManagerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommMechanismForManagerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommMechanismForManagerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommMechanismForManagerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommMechanismForManagerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommMechanismForManagerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommMechanismForManagerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommMechanismForManagerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommMechanismForManagerDeps_TRU64.h"
#else
#	include "UNIX_CommMechanismForManagerDeps_STUB.h"
#endif
