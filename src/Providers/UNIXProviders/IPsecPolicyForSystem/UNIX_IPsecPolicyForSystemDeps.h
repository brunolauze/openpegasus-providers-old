
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecPolicyForSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecPolicyForSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecPolicyForSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecPolicyForSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecPolicyForSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecPolicyForSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecPolicyForSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecPolicyForSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecPolicyForSystemDeps_TRU64.h"
#else
#	include "UNIX_IPsecPolicyForSystemDeps_STUB.h"
#endif
