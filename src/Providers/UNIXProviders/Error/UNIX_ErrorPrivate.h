
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ErrorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ErrorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ErrorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ErrorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ErrorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ErrorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ErrorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ErrorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ErrorPrivate_TRU64.h"
#else
#	include "UNIX_ErrorPrivate_STUB.h"
#endif
