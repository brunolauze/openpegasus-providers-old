
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LibraryExchangePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LibraryExchangePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LibraryExchangePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LibraryExchangePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LibraryExchangePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LibraryExchangePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LibraryExchangePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LibraryExchangePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LibraryExchangePrivate_TRU64.h"
#else
#	include "UNIX_LibraryExchangePrivate_STUB.h"
#endif
