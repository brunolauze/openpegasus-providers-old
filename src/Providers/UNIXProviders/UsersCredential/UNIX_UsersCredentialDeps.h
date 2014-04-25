
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UsersCredentialDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UsersCredentialDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UsersCredentialDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UsersCredentialDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UsersCredentialDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UsersCredentialDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UsersCredentialDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UsersCredentialDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UsersCredentialDeps_TRU64.h"
#else
#	include "UNIX_UsersCredentialDeps_STUB.h"
#endif
