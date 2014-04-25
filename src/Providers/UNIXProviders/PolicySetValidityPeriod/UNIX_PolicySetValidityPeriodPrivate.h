
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicySetValidityPeriodPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicySetValidityPeriodPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicySetValidityPeriodPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicySetValidityPeriodPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicySetValidityPeriodPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicySetValidityPeriodPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicySetValidityPeriodPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicySetValidityPeriodPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicySetValidityPeriodPrivate_TRU64.h"
#else
#	include "UNIX_PolicySetValidityPeriodPrivate_STUB.h"
#endif
