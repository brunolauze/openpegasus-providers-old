
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicySetValidityPeriodDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicySetValidityPeriodDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicySetValidityPeriodDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicySetValidityPeriodDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicySetValidityPeriodDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicySetValidityPeriodDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicySetValidityPeriodDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicySetValidityPeriodDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicySetValidityPeriodDeps_TRU64.h"
#else
#	include "UNIX_PolicySetValidityPeriodDeps_STUB.h"
#endif
