
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RedundancySetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RedundancySetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RedundancySetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RedundancySetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RedundancySetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RedundancySetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RedundancySetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RedundancySetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RedundancySetPrivate_TRU64.h"
#else
#	include "UNIX_RedundancySetPrivate_STUB.h"
#endif
