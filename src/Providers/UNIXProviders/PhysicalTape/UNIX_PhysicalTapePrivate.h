
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalTapePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalTapePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalTapePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalTapePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalTapePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalTapePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalTapePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalTapePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalTapePrivate_TRU64.h"
#else
#	include "UNIX_PhysicalTapePrivate_STUB.h"
#endif
