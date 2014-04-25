
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintJobFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintJobFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintJobFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintJobFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintJobFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintJobFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintJobFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintJobFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintJobFileDeps_TRU64.h"
#else
#	include "UNIX_PrintJobFileDeps_STUB.h"
#endif
