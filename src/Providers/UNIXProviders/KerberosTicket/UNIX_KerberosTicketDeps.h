
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosTicketDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosTicketDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosTicketDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosTicketDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosTicketDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosTicketDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosTicketDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosTicketDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosTicketDeps_TRU64.h"
#else
#	include "UNIX_KerberosTicketDeps_STUB.h"
#endif
