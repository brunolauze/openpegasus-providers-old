
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VendorPolicyActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VendorPolicyActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VendorPolicyActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VendorPolicyActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VendorPolicyActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VendorPolicyActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VendorPolicyActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VendorPolicyActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VendorPolicyActionDeps_TRU64.h"
#else
#	include "UNIX_VendorPolicyActionDeps_STUB.h"
#endif
