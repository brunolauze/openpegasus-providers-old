
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AlertInstIndicationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AlertInstIndicationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AlertInstIndicationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AlertInstIndicationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AlertInstIndicationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AlertInstIndicationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AlertInstIndicationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AlertInstIndicationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AlertInstIndicationDeps_TRU64.h"
#else
#	include "UNIX_AlertInstIndicationDeps_STUB.h"
#endif
