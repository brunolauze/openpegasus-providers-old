
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductPhysicalElementsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductPhysicalElementsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductPhysicalElementsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductPhysicalElementsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductPhysicalElementsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductPhysicalElementsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductPhysicalElementsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductPhysicalElementsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductPhysicalElementsDeps_TRU64.h"
#else
#	include "UNIX_ProductPhysicalElementsDeps_STUB.h"
#endif
