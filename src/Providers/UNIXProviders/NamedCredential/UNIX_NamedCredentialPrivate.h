
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NamedCredentialPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NamedCredentialPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NamedCredentialPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NamedCredentialPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NamedCredentialPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NamedCredentialPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NamedCredentialPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NamedCredentialPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NamedCredentialPrivate_TRU64.h"
#else
#	include "UNIX_NamedCredentialPrivate_STUB.h"
#endif
