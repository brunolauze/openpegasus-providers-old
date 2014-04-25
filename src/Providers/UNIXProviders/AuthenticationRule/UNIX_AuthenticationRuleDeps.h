
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthenticationRuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthenticationRuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthenticationRuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthenticationRuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthenticationRuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthenticationRuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthenticationRuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthenticationRuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthenticationRuleDeps_TRU64.h"
#else
#	include "UNIX_AuthenticationRuleDeps_STUB.h"
#endif
