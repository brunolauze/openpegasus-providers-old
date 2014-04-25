
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ChassisInRackDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ChassisInRackDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ChassisInRackDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ChassisInRackDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ChassisInRackDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ChassisInRackDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ChassisInRackDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ChassisInRackDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ChassisInRackDeps_TRU64.h"
#else
#	include "UNIX_ChassisInRackDeps_STUB.h"
#endif
