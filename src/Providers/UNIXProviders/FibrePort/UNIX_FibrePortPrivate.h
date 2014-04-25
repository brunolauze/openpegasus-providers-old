
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortPrivate_TRU64.h"
#else
#	include "UNIX_FibrePortPrivate_STUB.h"
#endif
