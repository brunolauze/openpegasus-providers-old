
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ActsAsSparePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ActsAsSparePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ActsAsSparePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ActsAsSparePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ActsAsSparePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ActsAsSparePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ActsAsSparePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ActsAsSparePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ActsAsSparePrivate_TRU64.h"
#else
#	include "UNIX_ActsAsSparePrivate_STUB.h"
#endif
