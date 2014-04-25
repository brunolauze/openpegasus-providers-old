
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NFSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NFSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NFSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NFSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NFSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NFSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NFSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NFSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NFSPrivate_TRU64.h"
#else
#	include "UNIX_NFSPrivate_STUB.h"
#endif
