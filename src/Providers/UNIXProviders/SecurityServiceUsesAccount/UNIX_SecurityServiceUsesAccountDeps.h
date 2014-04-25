
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SecurityServiceUsesAccountDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SecurityServiceUsesAccountDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SecurityServiceUsesAccountDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SecurityServiceUsesAccountDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SecurityServiceUsesAccountDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SecurityServiceUsesAccountDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SecurityServiceUsesAccountDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SecurityServiceUsesAccountDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SecurityServiceUsesAccountDeps_TRU64.h"
#else
#	include "UNIX_SecurityServiceUsesAccountDeps_STUB.h"
#endif
