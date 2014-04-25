
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SpareGroupPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SpareGroupPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SpareGroupPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SpareGroupPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SpareGroupPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SpareGroupPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SpareGroupPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SpareGroupPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SpareGroupPrivate_TRU64.h"
#else
#	include "UNIX_SpareGroupPrivate_STUB.h"
#endif
