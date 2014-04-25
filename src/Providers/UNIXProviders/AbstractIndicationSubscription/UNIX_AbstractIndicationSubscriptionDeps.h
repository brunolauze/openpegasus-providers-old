
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AbstractIndicationSubscriptionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AbstractIndicationSubscriptionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AbstractIndicationSubscriptionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AbstractIndicationSubscriptionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AbstractIndicationSubscriptionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AbstractIndicationSubscriptionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AbstractIndicationSubscriptionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AbstractIndicationSubscriptionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AbstractIndicationSubscriptionDeps_TRU64.h"
#else
#	include "UNIX_AbstractIndicationSubscriptionDeps_STUB.h"
#endif
