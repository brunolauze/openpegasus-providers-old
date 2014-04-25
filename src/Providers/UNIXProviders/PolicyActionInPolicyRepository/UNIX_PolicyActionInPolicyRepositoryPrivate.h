
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_TRU64.h"
#else
#	include "UNIX_PolicyActionInPolicyRepositoryPrivate_STUB.h"
#endif
