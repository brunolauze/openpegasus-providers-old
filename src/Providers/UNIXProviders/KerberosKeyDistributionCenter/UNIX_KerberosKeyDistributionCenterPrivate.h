
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosKeyDistributionCenterPrivate_TRU64.h"
#else
#	include "UNIX_KerberosKeyDistributionCenterPrivate_STUB.h"
#endif
