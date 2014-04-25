
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FileStoragePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FileStoragePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FileStoragePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FileStoragePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FileStoragePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FileStoragePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FileStoragePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FileStoragePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FileStoragePrivate_TRU64.h"
#else
#	include "UNIX_FileStoragePrivate_STUB.h"
#endif
