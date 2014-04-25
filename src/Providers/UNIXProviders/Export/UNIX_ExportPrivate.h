
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExportPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExportPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExportPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExportPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExportPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExportPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExportPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExportPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExportPrivate_TRU64.h"
#else
#	include "UNIX_ExportPrivate_STUB.h"
#endif
