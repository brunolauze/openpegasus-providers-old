
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterOfSecurityAssociationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterOfSecurityAssociationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterOfSecurityAssociationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterOfSecurityAssociationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterOfSecurityAssociationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterOfSecurityAssociationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterOfSecurityAssociationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterOfSecurityAssociationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterOfSecurityAssociationPrivate_TRU64.h"
#else
#	include "UNIX_FilterOfSecurityAssociationPrivate_STUB.h"
#endif
