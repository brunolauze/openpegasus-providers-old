
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnsignedCredentialDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnsignedCredentialDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnsignedCredentialDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnsignedCredentialDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnsignedCredentialDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnsignedCredentialDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnsignedCredentialDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnsignedCredentialDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnsignedCredentialDeps_TRU64.h"
#else
#	include "UNIX_UnsignedCredentialDeps_STUB.h"
#endif
