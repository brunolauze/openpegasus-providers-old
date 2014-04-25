
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RangeOfIPAddressesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RangeOfIPAddressesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RangeOfIPAddressesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RangeOfIPAddressesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RangeOfIPAddressesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RangeOfIPAddressesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RangeOfIPAddressesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RangeOfIPAddressesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RangeOfIPAddressesPrivate_TRU64.h"
#else
#	include "UNIX_RangeOfIPAddressesPrivate_STUB.h"
#endif
