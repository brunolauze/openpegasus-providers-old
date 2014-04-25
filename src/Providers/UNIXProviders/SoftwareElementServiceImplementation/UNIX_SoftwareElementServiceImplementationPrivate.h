
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareElementServiceImplementationPrivate_TRU64.h"
#else
#	include "UNIX_SoftwareElementServiceImplementationPrivate_STUB.h"
#endif
