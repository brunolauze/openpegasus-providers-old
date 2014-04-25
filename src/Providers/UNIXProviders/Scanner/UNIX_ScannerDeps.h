
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ScannerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ScannerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ScannerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ScannerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ScannerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ScannerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ScannerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ScannerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ScannerDeps_TRU64.h"
#else
#	include "UNIX_ScannerDeps_STUB.h"
#endif
