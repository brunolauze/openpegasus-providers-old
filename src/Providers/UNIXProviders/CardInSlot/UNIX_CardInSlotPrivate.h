
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CardInSlotPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CardInSlotPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CardInSlotPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CardInSlotPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CardInSlotPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CardInSlotPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CardInSlotPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CardInSlotPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CardInSlotPrivate_TRU64.h"
#else
#	include "UNIX_CardInSlotPrivate_STUB.h"
#endif
