
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DoorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DoorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DoorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DoorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DoorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DoorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DoorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DoorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DoorPrivate_TRU64.h"
#else
#	include "UNIX_DoorPrivate_STUB.h"
#endif
