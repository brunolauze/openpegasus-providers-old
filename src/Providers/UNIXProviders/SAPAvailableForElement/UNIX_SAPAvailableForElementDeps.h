
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SAPAvailableForElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SAPAvailableForElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SAPAvailableForElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SAPAvailableForElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SAPAvailableForElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SAPAvailableForElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SAPAvailableForElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SAPAvailableForElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SAPAvailableForElementDeps_TRU64.h"
#else
#	include "UNIX_SAPAvailableForElementDeps_STUB.h"
#endif
