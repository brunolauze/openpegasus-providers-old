
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OwningPrintQueuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OwningPrintQueuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OwningPrintQueuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OwningPrintQueuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OwningPrintQueuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OwningPrintQueuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OwningPrintQueuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OwningPrintQueuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OwningPrintQueuePrivate_TRU64.h"
#else
#	include "UNIX_OwningPrintQueuePrivate_STUB.h"
#endif
