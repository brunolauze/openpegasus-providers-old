
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPAdminDistanceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPAdminDistanceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPAdminDistanceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPAdminDistanceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPAdminDistanceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPAdminDistanceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPAdminDistanceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPAdminDistanceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPAdminDistanceDeps_TRU64.h"
#else
#	include "UNIX_BGPAdminDistanceDeps_STUB.h"
#endif
