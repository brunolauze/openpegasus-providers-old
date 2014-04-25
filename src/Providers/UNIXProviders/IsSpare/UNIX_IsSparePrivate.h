
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IsSparePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IsSparePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IsSparePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IsSparePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IsSparePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IsSparePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IsSparePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IsSparePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IsSparePrivate_TRU64.h"
#else
#	include "UNIX_IsSparePrivate_STUB.h"
#endif
