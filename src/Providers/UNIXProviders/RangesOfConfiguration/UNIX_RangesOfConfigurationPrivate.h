
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RangesOfConfigurationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RangesOfConfigurationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RangesOfConfigurationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RangesOfConfigurationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RangesOfConfigurationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RangesOfConfigurationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RangesOfConfigurationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RangesOfConfigurationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RangesOfConfigurationPrivate_TRU64.h"
#else
#	include "UNIX_RangesOfConfigurationPrivate_STUB.h"
#endif
