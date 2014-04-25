
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageTempSensorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageTempSensorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageTempSensorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageTempSensorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageTempSensorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageTempSensorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageTempSensorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageTempSensorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageTempSensorPrivate_TRU64.h"
#else
#	include "UNIX_PackageTempSensorPrivate_STUB.h"
#endif
