
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FileSpecificationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FileSpecificationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FileSpecificationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FileSpecificationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FileSpecificationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FileSpecificationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FileSpecificationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FileSpecificationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FileSpecificationDeps_TRU64.h"
#else
#	include "UNIX_FileSpecificationDeps_STUB.h"
#endif
