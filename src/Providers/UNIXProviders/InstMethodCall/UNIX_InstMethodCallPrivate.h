
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstMethodCallPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstMethodCallPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstMethodCallPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstMethodCallPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstMethodCallPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstMethodCallPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstMethodCallPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstMethodCallPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstMethodCallPrivate_TRU64.h"
#else
#	include "UNIX_InstMethodCallPrivate_STUB.h"
#endif
