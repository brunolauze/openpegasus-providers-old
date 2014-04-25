
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalMediaInLocationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalMediaInLocationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalMediaInLocationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalMediaInLocationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalMediaInLocationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalMediaInLocationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalMediaInLocationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalMediaInLocationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalMediaInLocationPrivate_TRU64.h"
#else
#	include "UNIX_PhysicalMediaInLocationPrivate_STUB.h"
#endif
