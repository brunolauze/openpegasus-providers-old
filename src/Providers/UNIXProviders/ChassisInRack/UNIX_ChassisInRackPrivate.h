
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ChassisInRackPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ChassisInRackPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ChassisInRackPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ChassisInRackPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ChassisInRackPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ChassisInRackPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ChassisInRackPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ChassisInRackPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ChassisInRackPrivate_TRU64.h"
#else
#	include "UNIX_ChassisInRackPrivate_STUB.h"
#endif
