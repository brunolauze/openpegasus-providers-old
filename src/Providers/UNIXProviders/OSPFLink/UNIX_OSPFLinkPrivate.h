
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSPFLinkPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSPFLinkPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSPFLinkPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSPFLinkPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSPFLinkPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSPFLinkPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSPFLinkPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSPFLinkPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSPFLinkPrivate_TRU64.h"
#else
#	include "UNIX_OSPFLinkPrivate_STUB.h"
#endif
