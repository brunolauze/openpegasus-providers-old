
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortDeps_TRU64.h"
#else
#	include "UNIX_FibrePortDeps_STUB.h"
#endif
