
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortEventCountersDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortEventCountersDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortEventCountersDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortEventCountersDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortEventCountersDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortEventCountersDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortEventCountersDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortEventCountersDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortEventCountersDeps_TRU64.h"
#else
#	include "UNIX_FibrePortEventCountersDeps_STUB.h"
#endif
