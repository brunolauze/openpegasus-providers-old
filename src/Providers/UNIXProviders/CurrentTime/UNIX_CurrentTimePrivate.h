
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CurrentTimePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CurrentTimePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CurrentTimePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CurrentTimePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CurrentTimePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CurrentTimePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CurrentTimePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CurrentTimePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CurrentTimePrivate_TRU64.h"
#else
#	include "UNIX_CurrentTimePrivate_STUB.h"
#endif
