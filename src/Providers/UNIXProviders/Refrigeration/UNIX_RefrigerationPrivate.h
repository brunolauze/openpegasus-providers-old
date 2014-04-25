
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RefrigerationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RefrigerationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RefrigerationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RefrigerationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RefrigerationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RefrigerationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RefrigerationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RefrigerationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RefrigerationPrivate_TRU64.h"
#else
#	include "UNIX_RefrigerationPrivate_STUB.h"
#endif
