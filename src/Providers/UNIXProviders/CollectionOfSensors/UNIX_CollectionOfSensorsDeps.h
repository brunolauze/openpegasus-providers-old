
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionOfSensorsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionOfSensorsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionOfSensorsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionOfSensorsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionOfSensorsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionOfSensorsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionOfSensorsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionOfSensorsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionOfSensorsDeps_TRU64.h"
#else
#	include "UNIX_CollectionOfSensorsDeps_STUB.h"
#endif
