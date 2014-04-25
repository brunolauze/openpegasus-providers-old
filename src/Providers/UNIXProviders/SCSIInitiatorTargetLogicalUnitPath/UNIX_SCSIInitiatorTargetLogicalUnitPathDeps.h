
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_TRU64.h"
#else
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps_STUB.h"
#endif
