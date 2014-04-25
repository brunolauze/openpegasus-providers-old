
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUPhysicalElementsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUPhysicalElementsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUPhysicalElementsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUPhysicalElementsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUPhysicalElementsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUPhysicalElementsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUPhysicalElementsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUPhysicalElementsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUPhysicalElementsPrivate_TRU64.h"
#else
#	include "UNIX_FRUPhysicalElementsPrivate_STUB.h"
#endif
