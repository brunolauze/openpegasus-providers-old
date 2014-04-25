
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedSecretIsSharedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedSecretIsSharedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedSecretIsSharedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedSecretIsSharedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedSecretIsSharedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedSecretIsSharedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedSecretIsSharedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedSecretIsSharedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedSecretIsSharedDeps_TRU64.h"
#else
#	include "UNIX_SharedSecretIsSharedDeps_STUB.h"
#endif
