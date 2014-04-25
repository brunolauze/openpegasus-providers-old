
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ArchitectureCheckPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ArchitectureCheckPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ArchitectureCheckPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ArchitectureCheckPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ArchitectureCheckPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ArchitectureCheckPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ArchitectureCheckPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ArchitectureCheckPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ArchitectureCheckPrivate_TRU64.h"
#else
#	include "UNIX_ArchitectureCheckPrivate_STUB.h"
#endif
