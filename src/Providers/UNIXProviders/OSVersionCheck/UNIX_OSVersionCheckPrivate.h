
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSVersionCheckPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSVersionCheckPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSVersionCheckPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSVersionCheckPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSVersionCheckPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSVersionCheckPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSVersionCheckPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSVersionCheckPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSVersionCheckPrivate_TRU64.h"
#else
#	include "UNIX_OSVersionCheckPrivate_STUB.h"
#endif
