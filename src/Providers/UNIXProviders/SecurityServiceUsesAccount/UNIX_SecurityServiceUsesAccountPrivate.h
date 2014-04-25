
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SecurityServiceUsesAccountPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SecurityServiceUsesAccountPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SecurityServiceUsesAccountPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SecurityServiceUsesAccountPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SecurityServiceUsesAccountPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SecurityServiceUsesAccountPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SecurityServiceUsesAccountPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SecurityServiceUsesAccountPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SecurityServiceUsesAccountPrivate_TRU64.h"
#else
#	include "UNIX_SecurityServiceUsesAccountPrivate_STUB.h"
#endif
