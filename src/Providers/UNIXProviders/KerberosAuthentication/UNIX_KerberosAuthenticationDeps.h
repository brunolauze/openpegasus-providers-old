
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosAuthenticationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosAuthenticationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosAuthenticationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosAuthenticationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosAuthenticationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosAuthenticationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosAuthenticationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosAuthenticationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosAuthenticationDeps_TRU64.h"
#else
#	include "UNIX_KerberosAuthenticationDeps_STUB.h"
#endif
