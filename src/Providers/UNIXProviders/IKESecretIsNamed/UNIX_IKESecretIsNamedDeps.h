
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKESecretIsNamedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKESecretIsNamedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKESecretIsNamedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKESecretIsNamedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKESecretIsNamedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKESecretIsNamedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKESecretIsNamedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKESecretIsNamedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKESecretIsNamedDeps_TRU64.h"
#else
#	include "UNIX_IKESecretIsNamedDeps_STUB.h"
#endif
