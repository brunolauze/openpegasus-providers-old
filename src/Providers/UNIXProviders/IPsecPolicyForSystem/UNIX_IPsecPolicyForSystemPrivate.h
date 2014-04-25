
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecPolicyForSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecPolicyForSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecPolicyForSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecPolicyForSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecPolicyForSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecPolicyForSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecPolicyForSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecPolicyForSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecPolicyForSystemPrivate_TRU64.h"
#else
#	include "UNIX_IPsecPolicyForSystemPrivate_STUB.h"
#endif
