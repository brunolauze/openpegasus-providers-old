
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NFSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NFSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NFSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NFSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NFSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NFSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NFSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NFSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NFSDeps_TRU64.h"
#else
#	include "UNIX_NFSDeps_STUB.h"
#endif
