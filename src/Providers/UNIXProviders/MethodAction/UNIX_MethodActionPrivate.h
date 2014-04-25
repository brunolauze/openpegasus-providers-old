
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodActionPrivate_TRU64.h"
#else
#	include "UNIX_MethodActionPrivate_STUB.h"
#endif
