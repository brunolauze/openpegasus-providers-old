
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SlotPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SlotPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SlotPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SlotPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SlotPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SlotPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SlotPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SlotPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SlotPrivate_TRU64.h"
#else
#	include "UNIX_SlotPrivate_STUB.h"
#endif
