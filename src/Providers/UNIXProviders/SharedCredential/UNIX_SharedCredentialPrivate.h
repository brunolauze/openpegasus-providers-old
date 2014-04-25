
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedCredentialPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedCredentialPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedCredentialPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedCredentialPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedCredentialPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedCredentialPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedCredentialPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedCredentialPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedCredentialPrivate_TRU64.h"
#else
#	include "UNIX_SharedCredentialPrivate_STUB.h"
#endif
