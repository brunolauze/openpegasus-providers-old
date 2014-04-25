
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IRQPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IRQPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IRQPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IRQPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IRQPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IRQPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IRQPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IRQPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IRQPrivate_TRU64.h"
#else
#	include "UNIX_IRQPrivate_STUB.h"
#endif
