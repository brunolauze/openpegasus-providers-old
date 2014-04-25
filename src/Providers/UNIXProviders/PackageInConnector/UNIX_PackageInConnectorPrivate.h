
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageInConnectorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageInConnectorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageInConnectorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageInConnectorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageInConnectorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageInConnectorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageInConnectorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageInConnectorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageInConnectorPrivate_TRU64.h"
#else
#	include "UNIX_PackageInConnectorPrivate_STUB.h"
#endif
