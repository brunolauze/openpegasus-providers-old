
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedSecretPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedSecretPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedSecretPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedSecretPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedSecretPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedSecretPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedSecretPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedSecretPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedSecretPrivate_TRU64.h"
#else
#	include "UNIX_SharedSecretPrivate_STUB.h"
#endif
