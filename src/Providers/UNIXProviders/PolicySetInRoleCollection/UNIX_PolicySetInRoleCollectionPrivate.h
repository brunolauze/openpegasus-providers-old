
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicySetInRoleCollectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicySetInRoleCollectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicySetInRoleCollectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicySetInRoleCollectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicySetInRoleCollectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicySetInRoleCollectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicySetInRoleCollectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicySetInRoleCollectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicySetInRoleCollectionPrivate_TRU64.h"
#else
#	include "UNIX_PolicySetInRoleCollectionPrivate_STUB.h"
#endif
