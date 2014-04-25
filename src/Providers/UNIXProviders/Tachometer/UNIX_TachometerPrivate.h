
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TachometerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TachometerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TachometerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TachometerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TachometerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TachometerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TachometerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TachometerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TachometerPrivate_TRU64.h"
#else
#	include "UNIX_TachometerPrivate_STUB.h"
#endif
