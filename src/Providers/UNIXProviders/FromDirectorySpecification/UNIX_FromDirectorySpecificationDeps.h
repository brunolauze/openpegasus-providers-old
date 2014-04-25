
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FromDirectorySpecificationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FromDirectorySpecificationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FromDirectorySpecificationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FromDirectorySpecificationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FromDirectorySpecificationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FromDirectorySpecificationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FromDirectorySpecificationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FromDirectorySpecificationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FromDirectorySpecificationDeps_TRU64.h"
#else
#	include "UNIX_FromDirectorySpecificationDeps_STUB.h"
#endif
