
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUPhysicalElementsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUPhysicalElementsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUPhysicalElementsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUPhysicalElementsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUPhysicalElementsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUPhysicalElementsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUPhysicalElementsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUPhysicalElementsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUPhysicalElementsDeps_TRU64.h"
#else
#	include "UNIX_FRUPhysicalElementsDeps_STUB.h"
#endif
