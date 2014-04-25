
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MultiStateSensorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MultiStateSensorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MultiStateSensorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MultiStateSensorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MultiStateSensorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MultiStateSensorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MultiStateSensorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MultiStateSensorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MultiStateSensorPrivate_TRU64.h"
#else
#	include "UNIX_MultiStateSensorPrivate_STUB.h"
#endif
