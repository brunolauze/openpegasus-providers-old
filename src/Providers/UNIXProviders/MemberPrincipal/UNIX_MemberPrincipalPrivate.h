
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemberPrincipalPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemberPrincipalPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemberPrincipalPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemberPrincipalPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemberPrincipalPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemberPrincipalPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemberPrincipalPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemberPrincipalPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemberPrincipalPrivate_TRU64.h"
#else
#	include "UNIX_MemberPrincipalPrivate_STUB.h"
#endif
