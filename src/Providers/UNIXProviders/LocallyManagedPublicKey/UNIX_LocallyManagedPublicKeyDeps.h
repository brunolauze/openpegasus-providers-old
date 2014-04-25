
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LocallyManagedPublicKeyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LocallyManagedPublicKeyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LocallyManagedPublicKeyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LocallyManagedPublicKeyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LocallyManagedPublicKeyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LocallyManagedPublicKeyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LocallyManagedPublicKeyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LocallyManagedPublicKeyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LocallyManagedPublicKeyDeps_TRU64.h"
#else
#	include "UNIX_LocallyManagedPublicKeyDeps_STUB.h"
#endif
