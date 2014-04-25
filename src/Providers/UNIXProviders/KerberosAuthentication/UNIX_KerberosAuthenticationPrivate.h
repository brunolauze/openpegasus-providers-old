
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosAuthenticationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosAuthenticationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosAuthenticationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosAuthenticationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosAuthenticationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosAuthenticationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosAuthenticationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosAuthenticationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosAuthenticationPrivate_TRU64.h"
#else
#	include "UNIX_KerberosAuthenticationPrivate_STUB.h"
#endif
