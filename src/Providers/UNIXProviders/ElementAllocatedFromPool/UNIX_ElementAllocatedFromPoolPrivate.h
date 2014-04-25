
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementAllocatedFromPoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementAllocatedFromPoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementAllocatedFromPoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementAllocatedFromPoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementAllocatedFromPoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementAllocatedFromPoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementAllocatedFromPoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementAllocatedFromPoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementAllocatedFromPoolPrivate_TRU64.h"
#else
#	include "UNIX_ElementAllocatedFromPoolPrivate_STUB.h"
#endif
