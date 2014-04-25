
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemoveDirectoryActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemoveDirectoryActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemoveDirectoryActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemoveDirectoryActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemoveDirectoryActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemoveDirectoryActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemoveDirectoryActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemoveDirectoryActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemoveDirectoryActionPrivate_TRU64.h"
#else
#	include "UNIX_RemoveDirectoryActionPrivate_STUB.h"
#endif
