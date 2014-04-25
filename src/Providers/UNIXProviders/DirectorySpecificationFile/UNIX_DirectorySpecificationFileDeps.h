
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DirectorySpecificationFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DirectorySpecificationFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DirectorySpecificationFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DirectorySpecificationFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DirectorySpecificationFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DirectorySpecificationFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DirectorySpecificationFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DirectorySpecificationFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DirectorySpecificationFileDeps_TRU64.h"
#else
#	include "UNIX_DirectorySpecificationFileDeps_STUB.h"
#endif
