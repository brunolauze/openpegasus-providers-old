
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementAllocatedFromPoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementAllocatedFromPoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementAllocatedFromPoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementAllocatedFromPoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementAllocatedFromPoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementAllocatedFromPoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementAllocatedFromPoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementAllocatedFromPoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementAllocatedFromPoolDeps_TRU64.h"
#else
#	include "UNIX_ElementAllocatedFromPoolDeps_STUB.h"
#endif
