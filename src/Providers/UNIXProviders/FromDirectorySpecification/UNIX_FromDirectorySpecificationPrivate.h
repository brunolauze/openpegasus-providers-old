
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FromDirectorySpecificationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FromDirectorySpecificationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FromDirectorySpecificationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FromDirectorySpecificationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FromDirectorySpecificationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FromDirectorySpecificationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FromDirectorySpecificationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FromDirectorySpecificationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FromDirectorySpecificationPrivate_TRU64.h"
#else
#	include "UNIX_FromDirectorySpecificationPrivate_STUB.h"
#endif
