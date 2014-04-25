
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompositeExtentBasedOnDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompositeExtentBasedOnDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompositeExtentBasedOnDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompositeExtentBasedOnDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompositeExtentBasedOnDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompositeExtentBasedOnDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompositeExtentBasedOnDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompositeExtentBasedOnDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompositeExtentBasedOnDeps_TRU64.h"
#else
#	include "UNIX_CompositeExtentBasedOnDeps_STUB.h"
#endif
