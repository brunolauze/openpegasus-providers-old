
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VendorPolicyConditionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VendorPolicyConditionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VendorPolicyConditionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VendorPolicyConditionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VendorPolicyConditionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VendorPolicyConditionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VendorPolicyConditionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VendorPolicyConditionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VendorPolicyConditionPrivate_TRU64.h"
#else
#	include "UNIX_VendorPolicyConditionPrivate_STUB.h"
#endif
