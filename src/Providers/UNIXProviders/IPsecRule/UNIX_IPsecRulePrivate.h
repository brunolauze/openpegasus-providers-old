
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecRulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecRulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecRulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecRulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecRulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecRulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecRulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecRulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecRulePrivate_TRU64.h"
#else
#	include "UNIX_IPsecRulePrivate_STUB.h"
#endif
