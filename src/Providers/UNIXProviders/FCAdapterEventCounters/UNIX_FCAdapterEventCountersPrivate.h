
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCAdapterEventCountersPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCAdapterEventCountersPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCAdapterEventCountersPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCAdapterEventCountersPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCAdapterEventCountersPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCAdapterEventCountersPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCAdapterEventCountersPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCAdapterEventCountersPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCAdapterEventCountersPrivate_TRU64.h"
#else
#	include "UNIX_FCAdapterEventCountersPrivate_STUB.h"
#endif
