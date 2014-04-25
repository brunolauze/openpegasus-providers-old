
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DirectorySpecificationFilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DirectorySpecificationFilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DirectorySpecificationFilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DirectorySpecificationFilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DirectorySpecificationFilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DirectorySpecificationFilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DirectorySpecificationFilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DirectorySpecificationFilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DirectorySpecificationFilePrivate_TRU64.h"
#else
#	include "UNIX_DirectorySpecificationFilePrivate_STUB.h"
#endif
