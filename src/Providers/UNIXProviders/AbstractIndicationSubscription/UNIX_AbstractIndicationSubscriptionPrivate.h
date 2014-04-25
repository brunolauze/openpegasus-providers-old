
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AbstractIndicationSubscriptionPrivate_TRU64.h"
#else
#	include "UNIX_AbstractIndicationSubscriptionPrivate_STUB.h"
#endif
