
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthenticationRequirementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthenticationRequirementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthenticationRequirementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthenticationRequirementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthenticationRequirementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthenticationRequirementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthenticationRequirementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthenticationRequirementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthenticationRequirementPrivate_TRU64.h"
#else
#	include "UNIX_AuthenticationRequirementPrivate_STUB.h"
#endif
