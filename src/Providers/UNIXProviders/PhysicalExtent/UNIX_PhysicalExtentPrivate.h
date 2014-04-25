
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalExtentPrivate_TRU64.h"
#else
#	include "UNIX_PhysicalExtentPrivate_STUB.h"
#endif
