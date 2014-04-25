
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ScannerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ScannerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ScannerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ScannerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ScannerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ScannerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ScannerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ScannerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ScannerPrivate_TRU64.h"
#else
#	include "UNIX_ScannerPrivate_STUB.h"
#endif
