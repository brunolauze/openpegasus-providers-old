
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalLinkPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalLinkPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalLinkPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalLinkPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalLinkPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalLinkPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalLinkPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalLinkPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalLinkPrivate_TRU64.h"
#else
#	include "UNIX_PhysicalLinkPrivate_STUB.h"
#endif
