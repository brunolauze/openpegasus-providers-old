
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ToDirectorySpecificationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ToDirectorySpecificationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ToDirectorySpecificationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ToDirectorySpecificationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ToDirectorySpecificationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ToDirectorySpecificationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ToDirectorySpecificationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ToDirectorySpecificationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ToDirectorySpecificationPrivate_TRU64.h"
#else
#	include "UNIX_ToDirectorySpecificationPrivate_STUB.h"
#endif
