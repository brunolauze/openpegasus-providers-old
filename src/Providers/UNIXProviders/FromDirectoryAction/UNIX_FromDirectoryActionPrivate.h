
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FromDirectoryActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FromDirectoryActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FromDirectoryActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FromDirectoryActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FromDirectoryActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FromDirectoryActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FromDirectoryActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FromDirectoryActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FromDirectoryActionPrivate_TRU64.h"
#else
#	include "UNIX_FromDirectoryActionPrivate_STUB.h"
#endif
