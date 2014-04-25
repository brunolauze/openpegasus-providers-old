
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExtraCapacityGroupDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExtraCapacityGroupDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExtraCapacityGroupDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExtraCapacityGroupDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExtraCapacityGroupDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExtraCapacityGroupDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExtraCapacityGroupDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExtraCapacityGroupDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExtraCapacityGroupDeps_TRU64.h"
#else
#	include "UNIX_ExtraCapacityGroupDeps_STUB.h"
#endif
