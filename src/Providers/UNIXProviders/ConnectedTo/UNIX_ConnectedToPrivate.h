
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConnectedToPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConnectedToPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConnectedToPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConnectedToPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConnectedToPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConnectedToPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConnectedToPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConnectedToPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConnectedToPrivate_TRU64.h"
#else
#	include "UNIX_ConnectedToPrivate_STUB.h"
#endif
