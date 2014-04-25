
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocatedResourcePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocatedResourcePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocatedResourcePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocatedResourcePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocatedResourcePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocatedResourcePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocatedResourcePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocatedResourcePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocatedResourcePrivate_TRU64.h"
#else
#	include "UNIX_AllocatedResourcePrivate_STUB.h"
#endif
