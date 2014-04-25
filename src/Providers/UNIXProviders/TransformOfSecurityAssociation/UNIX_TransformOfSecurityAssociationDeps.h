
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransformOfSecurityAssociationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransformOfSecurityAssociationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransformOfSecurityAssociationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransformOfSecurityAssociationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransformOfSecurityAssociationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransformOfSecurityAssociationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransformOfSecurityAssociationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransformOfSecurityAssociationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransformOfSecurityAssociationDeps_TRU64.h"
#else
#	include "UNIX_TransformOfSecurityAssociationDeps_STUB.h"
#endif
