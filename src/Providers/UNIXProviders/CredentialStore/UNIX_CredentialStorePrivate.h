
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CredentialStorePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CredentialStorePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CredentialStorePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CredentialStorePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CredentialStorePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CredentialStorePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CredentialStorePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CredentialStorePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CredentialStorePrivate_TRU64.h"
#else
#	include "UNIX_CredentialStorePrivate_STUB.h"
#endif
