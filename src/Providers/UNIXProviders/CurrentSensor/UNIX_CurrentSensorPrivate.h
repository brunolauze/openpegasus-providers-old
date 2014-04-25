
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CurrentSensorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CurrentSensorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CurrentSensorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CurrentSensorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CurrentSensorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CurrentSensorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CurrentSensorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CurrentSensorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CurrentSensorPrivate_TRU64.h"
#else
#	include "UNIX_CurrentSensorPrivate_STUB.h"
#endif
