
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosCredentialPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosCredentialPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosCredentialPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosCredentialPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosCredentialPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosCredentialPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosCredentialPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosCredentialPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosCredentialPrivate_TRU64.h"
#else
#	include "UNIX_KerberosCredentialPrivate_STUB.h"
#endif
