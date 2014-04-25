
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MorePersonInfoPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MorePersonInfoPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MorePersonInfoPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MorePersonInfoPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MorePersonInfoPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MorePersonInfoPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MorePersonInfoPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MorePersonInfoPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MorePersonInfoPrivate_TRU64.h"
#else
#	include "UNIX_MorePersonInfoPrivate_STUB.h"
#endif
