
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrinterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrinterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrinterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrinterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrinterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrinterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrinterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrinterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrinterDeps_TRU64.h"
#else
#	include "UNIX_PrinterDeps_STUB.h"
#endif
