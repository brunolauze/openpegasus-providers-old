
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MagazinePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MagazinePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MagazinePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MagazinePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MagazinePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MagazinePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MagazinePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MagazinePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MagazinePrivate_TRU64.h"
#else
#	include "UNIX_MagazinePrivate_STUB.h"
#endif
