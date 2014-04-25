
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyActionInPolicyActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyActionInPolicyActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyActionInPolicyActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyActionInPolicyActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyActionInPolicyActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyActionInPolicyActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyActionInPolicyActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyActionInPolicyActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyActionInPolicyActionPrivate_TRU64.h"
#else
#	include "UNIX_PolicyActionInPolicyActionPrivate_STUB.h"
#endif
