
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LibraryExchangeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LibraryExchangeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LibraryExchangeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LibraryExchangeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LibraryExchangeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LibraryExchangeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LibraryExchangeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LibraryExchangeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LibraryExchangeDeps_TRU64.h"
#else
#	include "UNIX_LibraryExchangeDeps_STUB.h"
#endif
