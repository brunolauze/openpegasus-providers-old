
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UsersCredentialPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UsersCredentialPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UsersCredentialPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UsersCredentialPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UsersCredentialPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UsersCredentialPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UsersCredentialPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UsersCredentialPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UsersCredentialPrivate_TRU64.h"
#else
#	include "UNIX_UsersCredentialPrivate_STUB.h"
#endif
