
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FileSpecificationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FileSpecificationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FileSpecificationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FileSpecificationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FileSpecificationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FileSpecificationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FileSpecificationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FileSpecificationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FileSpecificationPrivate_TRU64.h"
#else
#	include "UNIX_FileSpecificationPrivate_STUB.h"
#endif
