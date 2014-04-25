
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCAdapterEventCountersDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCAdapterEventCountersDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCAdapterEventCountersDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCAdapterEventCountersDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCAdapterEventCountersDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCAdapterEventCountersDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCAdapterEventCountersDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCAdapterEventCountersDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCAdapterEventCountersDeps_TRU64.h"
#else
#	include "UNIX_FCAdapterEventCountersDeps_STUB.h"
#endif
