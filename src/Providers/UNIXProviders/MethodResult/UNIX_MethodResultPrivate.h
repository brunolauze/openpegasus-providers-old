
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodResultPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodResultPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodResultPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodResultPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodResultPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodResultPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodResultPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodResultPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodResultPrivate_TRU64.h"
#else
#	include "UNIX_MethodResultPrivate_STUB.h"
#endif
