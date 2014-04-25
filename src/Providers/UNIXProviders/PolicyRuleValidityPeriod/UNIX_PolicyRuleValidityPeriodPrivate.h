
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyRuleValidityPeriodPrivate_TRU64.h"
#else
#	include "UNIX_PolicyRuleValidityPeriodPrivate_STUB.h"
#endif
