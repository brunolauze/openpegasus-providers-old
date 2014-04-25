
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionConfigurationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionConfigurationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionConfigurationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionConfigurationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionConfigurationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionConfigurationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionConfigurationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionConfigurationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionConfigurationPrivate_TRU64.h"
#else
#	include "UNIX_CollectionConfigurationPrivate_STUB.h"
#endif
