
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccountMapsToAccountPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccountMapsToAccountPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccountMapsToAccountPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccountMapsToAccountPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccountMapsToAccountPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccountMapsToAccountPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccountMapsToAccountPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccountMapsToAccountPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccountMapsToAccountPrivate_TRU64.h"
#else
#	include "UNIX_AccountMapsToAccountPrivate_STUB.h"
#endif
