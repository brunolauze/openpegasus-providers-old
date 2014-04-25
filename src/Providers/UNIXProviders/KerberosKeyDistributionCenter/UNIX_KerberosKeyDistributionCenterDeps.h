
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosKeyDistributionCenterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosKeyDistributionCenterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosKeyDistributionCenterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosKeyDistributionCenterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosKeyDistributionCenterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosKeyDistributionCenterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosKeyDistributionCenterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosKeyDistributionCenterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosKeyDistributionCenterDeps_TRU64.h"
#else
#	include "UNIX_KerberosKeyDistributionCenterDeps_STUB.h"
#endif
