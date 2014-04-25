
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BinarySensorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BinarySensorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BinarySensorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BinarySensorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BinarySensorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BinarySensorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BinarySensorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BinarySensorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BinarySensorPrivate_TRU64.h"
#else
#	include "UNIX_BinarySensorPrivate_STUB.h"
#endif
