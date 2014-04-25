
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ToDirectorySpecificationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ToDirectorySpecificationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ToDirectorySpecificationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ToDirectorySpecificationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ToDirectorySpecificationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ToDirectorySpecificationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ToDirectorySpecificationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ToDirectorySpecificationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ToDirectorySpecificationDeps_TRU64.h"
#else
#	include "UNIX_ToDirectorySpecificationDeps_STUB.h"
#endif
