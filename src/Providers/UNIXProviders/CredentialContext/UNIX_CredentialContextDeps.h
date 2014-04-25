
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CredentialContextDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CredentialContextDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CredentialContextDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CredentialContextDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CredentialContextDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CredentialContextDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CredentialContextDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CredentialContextDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CredentialContextDeps_TRU64.h"
#else
#	include "UNIX_CredentialContextDeps_STUB.h"
#endif
