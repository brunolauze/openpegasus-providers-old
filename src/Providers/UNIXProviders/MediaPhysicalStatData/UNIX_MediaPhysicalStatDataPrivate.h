
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaPhysicalStatDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaPhysicalStatDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaPhysicalStatDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaPhysicalStatDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaPhysicalStatDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaPhysicalStatDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaPhysicalStatDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaPhysicalStatDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaPhysicalStatDataPrivate_TRU64.h"
#else
#	include "UNIX_MediaPhysicalStatDataPrivate_STUB.h"
#endif
