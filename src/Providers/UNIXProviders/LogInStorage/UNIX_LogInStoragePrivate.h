
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogInStoragePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogInStoragePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogInStoragePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogInStoragePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogInStoragePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogInStoragePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogInStoragePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogInStoragePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogInStoragePrivate_TRU64.h"
#else
#	include "UNIX_LogInStoragePrivate_STUB.h"
#endif
