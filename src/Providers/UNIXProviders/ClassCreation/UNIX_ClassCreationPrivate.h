
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassCreationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassCreationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassCreationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassCreationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassCreationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassCreationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassCreationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassCreationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassCreationPrivate_TRU64.h"
#else
#	include "UNIX_ClassCreationPrivate_STUB.h"
#endif
