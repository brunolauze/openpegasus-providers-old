
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrinterServicingQueueDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrinterServicingQueueDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrinterServicingQueueDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrinterServicingQueueDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrinterServicingQueueDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrinterServicingQueueDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrinterServicingQueueDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrinterServicingQueueDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrinterServicingQueueDeps_TRU64.h"
#else
#	include "UNIX_PrinterServicingQueueDeps_STUB.h"
#endif
