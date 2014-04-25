
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransformOfSecurityAssociationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransformOfSecurityAssociationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransformOfSecurityAssociationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransformOfSecurityAssociationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransformOfSecurityAssociationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransformOfSecurityAssociationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransformOfSecurityAssociationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransformOfSecurityAssociationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransformOfSecurityAssociationPrivate_TRU64.h"
#else
#	include "UNIX_TransformOfSecurityAssociationPrivate_STUB.h"
#endif
