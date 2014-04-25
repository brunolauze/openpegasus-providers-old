
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedDomainDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedDomainDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedDomainDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedDomainDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedDomainDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedDomainDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedDomainDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedDomainDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedDomainDeps_TRU64.h"
#else
#	include "UNIX_ContainedDomainDeps_STUB.h"
#endif
