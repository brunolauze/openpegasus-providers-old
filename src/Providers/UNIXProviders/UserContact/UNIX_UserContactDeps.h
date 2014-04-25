
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UserContactDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UserContactDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UserContactDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UserContactDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UserContactDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UserContactDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UserContactDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UserContactDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UserContactDeps_TRU64.h"
#else
#	include "UNIX_UserContactDeps_STUB.h"
#endif
