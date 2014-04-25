
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiscreteSensorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiscreteSensorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiscreteSensorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiscreteSensorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiscreteSensorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiscreteSensorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiscreteSensorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiscreteSensorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiscreteSensorPrivate_TRU64.h"
#else
#	include "UNIX_DiscreteSensorPrivate_STUB.h"
#endif
