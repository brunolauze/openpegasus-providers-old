
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthenticateForUsePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthenticateForUsePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthenticateForUsePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthenticateForUsePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthenticateForUsePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthenticateForUsePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthenticateForUsePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthenticateForUsePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthenticateForUsePrivate_TRU64.h"
#else
#	include "UNIX_AuthenticateForUsePrivate_STUB.h"
#endif
