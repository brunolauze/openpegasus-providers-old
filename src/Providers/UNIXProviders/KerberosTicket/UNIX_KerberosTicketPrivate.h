
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KerberosTicketPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KerberosTicketPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KerberosTicketPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KerberosTicketPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KerberosTicketPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KerberosTicketPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KerberosTicketPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KerberosTicketPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KerberosTicketPrivate_TRU64.h"
#else
#	include "UNIX_KerberosTicketPrivate_STUB.h"
#endif
