
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortActiveLoginPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortActiveLoginPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortActiveLoginPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortActiveLoginPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortActiveLoginPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortActiveLoginPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortActiveLoginPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortActiveLoginPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortActiveLoginPrivate_TRU64.h"
#else
#	include "UNIX_FibrePortActiveLoginPrivate_STUB.h"
#endif
