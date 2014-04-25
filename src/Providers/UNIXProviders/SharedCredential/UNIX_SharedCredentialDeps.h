
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedCredentialDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedCredentialDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedCredentialDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedCredentialDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedCredentialDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedCredentialDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedCredentialDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedCredentialDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedCredentialDeps_TRU64.h"
#else
#	include "UNIX_SharedCredentialDeps_STUB.h"
#endif
