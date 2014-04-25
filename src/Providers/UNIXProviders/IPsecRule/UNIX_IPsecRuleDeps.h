
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecRuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecRuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecRuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecRuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecRuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecRuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecRuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecRuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecRuleDeps_TRU64.h"
#else
#	include "UNIX_IPsecRuleDeps_STUB.h"
#endif
