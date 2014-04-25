
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthenticationRulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthenticationRulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthenticationRulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthenticationRulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthenticationRulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthenticationRulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthenticationRulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthenticationRulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthenticationRulePrivate_TRU64.h"
#else
#	include "UNIX_AuthenticationRulePrivate_STUB.h"
#endif
