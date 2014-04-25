
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReusablePolicyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReusablePolicyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReusablePolicyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReusablePolicyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReusablePolicyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReusablePolicyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReusablePolicyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReusablePolicyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReusablePolicyDeps_TRU64.h"
#else
#	include "UNIX_ReusablePolicyDeps_STUB.h"
#endif
