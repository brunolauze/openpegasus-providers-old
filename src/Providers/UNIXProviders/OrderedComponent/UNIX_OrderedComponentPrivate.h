
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrderedComponentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrderedComponentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrderedComponentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrderedComponentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrderedComponentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrderedComponentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrderedComponentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrderedComponentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrderedComponentPrivate_TRU64.h"
#else
#	include "UNIX_OrderedComponentPrivate_STUB.h"
#endif
