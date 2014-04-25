
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CredentialContextPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CredentialContextPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CredentialContextPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CredentialContextPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CredentialContextPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CredentialContextPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CredentialContextPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CredentialContextPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CredentialContextPrivate_TRU64.h"
#else
#	include "UNIX_CredentialContextPrivate_STUB.h"
#endif
