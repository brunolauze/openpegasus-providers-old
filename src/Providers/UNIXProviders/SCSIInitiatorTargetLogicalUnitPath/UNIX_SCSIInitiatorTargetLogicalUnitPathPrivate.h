
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_TRU64.h"
#else
#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate_STUB.h"
#endif
