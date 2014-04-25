
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosCredentialDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosCredentialDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosCredentialDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosCredentialDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosCredentialDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosCredentialDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosCredentialDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosCredentialDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosCredentialDeps_TRU64.h"
#else
#	include "UNIX_KerberosCredentialDeps_STUB.h"
#endif
