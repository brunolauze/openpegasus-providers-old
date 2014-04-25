
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DocumentAuthenticationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DocumentAuthenticationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DocumentAuthenticationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DocumentAuthenticationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DocumentAuthenticationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DocumentAuthenticationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DocumentAuthenticationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DocumentAuthenticationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DocumentAuthenticationPrivate_TRU64.h"
#else
#	include "UNIX_DocumentAuthenticationPrivate_STUB.h"
#endif
