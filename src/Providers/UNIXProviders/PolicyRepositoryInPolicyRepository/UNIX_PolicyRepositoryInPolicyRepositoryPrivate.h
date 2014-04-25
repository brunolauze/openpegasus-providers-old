
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_TRU64.h"
#else
#	include "UNIX_PolicyRepositoryInPolicyRepositoryPrivate_STUB.h"
#endif
