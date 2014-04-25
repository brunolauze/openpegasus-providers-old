
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AcceptCredentialFromDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AcceptCredentialFromDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AcceptCredentialFromDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AcceptCredentialFromDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AcceptCredentialFromDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AcceptCredentialFromDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AcceptCredentialFromDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AcceptCredentialFromDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AcceptCredentialFromDeps_TRU64.h"
#else
#	include "UNIX_AcceptCredentialFromDeps_STUB.h"
#endif
