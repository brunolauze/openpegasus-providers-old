
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemberPrincipalDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemberPrincipalDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemberPrincipalDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemberPrincipalDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemberPrincipalDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemberPrincipalDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemberPrincipalDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemberPrincipalDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemberPrincipalDeps_TRU64.h"
#else
#	include "UNIX_MemberPrincipalDeps_STUB.h"
#endif
