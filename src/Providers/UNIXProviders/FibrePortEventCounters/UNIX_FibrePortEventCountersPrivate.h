
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortEventCountersPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortEventCountersPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortEventCountersPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortEventCountersPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortEventCountersPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortEventCountersPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortEventCountersPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortEventCountersPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortEventCountersPrivate_TRU64.h"
#else
#	include "UNIX_FibrePortEventCountersPrivate_STUB.h"
#endif
