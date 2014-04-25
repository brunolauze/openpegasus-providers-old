
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RecordAppliesToElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RecordAppliesToElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RecordAppliesToElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RecordAppliesToElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RecordAppliesToElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RecordAppliesToElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RecordAppliesToElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RecordAppliesToElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RecordAppliesToElementPrivate_TRU64.h"
#else
#	include "UNIX_RecordAppliesToElementPrivate_STUB.h"
#endif
