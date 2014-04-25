
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_X509CredentialFilterEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_X509CredentialFilterEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_X509CredentialFilterEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_X509CredentialFilterEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_X509CredentialFilterEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_X509CredentialFilterEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_X509CredentialFilterEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_X509CredentialFilterEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_X509CredentialFilterEntryDeps_TRU64.h"
#else
#	include "UNIX_X509CredentialFilterEntryDeps_STUB.h"
#endif
