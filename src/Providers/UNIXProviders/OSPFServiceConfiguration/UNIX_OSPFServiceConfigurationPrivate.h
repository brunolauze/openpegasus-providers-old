
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSPFServiceConfigurationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSPFServiceConfigurationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSPFServiceConfigurationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSPFServiceConfigurationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSPFServiceConfigurationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSPFServiceConfigurationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSPFServiceConfigurationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSPFServiceConfigurationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSPFServiceConfigurationPrivate_TRU64.h"
#else
#	include "UNIX_OSPFServiceConfigurationPrivate_STUB.h"
#endif
