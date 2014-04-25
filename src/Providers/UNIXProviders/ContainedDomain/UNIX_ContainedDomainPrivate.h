
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedDomainPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedDomainPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedDomainPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedDomainPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedDomainPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedDomainPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedDomainPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedDomainPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedDomainPrivate_TRU64.h"
#else
#	include "UNIX_ContainedDomainPrivate_STUB.h"
#endif
