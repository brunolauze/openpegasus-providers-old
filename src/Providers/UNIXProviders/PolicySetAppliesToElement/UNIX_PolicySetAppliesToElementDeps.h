
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicySetAppliesToElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicySetAppliesToElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicySetAppliesToElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicySetAppliesToElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicySetAppliesToElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicySetAppliesToElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicySetAppliesToElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicySetAppliesToElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicySetAppliesToElementDeps_TRU64.h"
#else
#	include "UNIX_PolicySetAppliesToElementDeps_STUB.h"
#endif
