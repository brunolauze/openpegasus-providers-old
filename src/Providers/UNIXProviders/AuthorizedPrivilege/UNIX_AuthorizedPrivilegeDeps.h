
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthorizedPrivilegeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthorizedPrivilegeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthorizedPrivilegeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthorizedPrivilegeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthorizedPrivilegeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthorizedPrivilegeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthorizedPrivilegeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthorizedPrivilegeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthorizedPrivilegeDeps_TRU64.h"
#else
#	include "UNIX_AuthorizedPrivilegeDeps_STUB.h"
#endif
