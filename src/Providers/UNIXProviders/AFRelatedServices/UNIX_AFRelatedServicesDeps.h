
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AFRelatedServicesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AFRelatedServicesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AFRelatedServicesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AFRelatedServicesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AFRelatedServicesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AFRelatedServicesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AFRelatedServicesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AFRelatedServicesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AFRelatedServicesDeps_TRU64.h"
#else
#	include "UNIX_AFRelatedServicesDeps_STUB.h"
#endif
