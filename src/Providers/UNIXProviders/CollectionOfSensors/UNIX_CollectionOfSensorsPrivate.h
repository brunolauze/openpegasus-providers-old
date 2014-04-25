
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionOfSensorsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionOfSensorsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionOfSensorsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionOfSensorsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionOfSensorsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionOfSensorsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionOfSensorsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionOfSensorsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionOfSensorsPrivate_TRU64.h"
#else
#	include "UNIX_CollectionOfSensorsPrivate_STUB.h"
#endif
