
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DirectorySpecificationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DirectorySpecificationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DirectorySpecificationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DirectorySpecificationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DirectorySpecificationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DirectorySpecificationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DirectorySpecificationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DirectorySpecificationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DirectorySpecificationDeps_TRU64.h"
#else
#	include "UNIX_DirectorySpecificationDeps_STUB.h"
#endif
