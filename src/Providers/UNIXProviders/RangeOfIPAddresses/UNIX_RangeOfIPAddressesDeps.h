
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RangeOfIPAddressesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RangeOfIPAddressesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RangeOfIPAddressesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RangeOfIPAddressesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RangeOfIPAddressesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RangeOfIPAddressesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RangeOfIPAddressesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RangeOfIPAddressesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RangeOfIPAddressesDeps_TRU64.h"
#else
#	include "UNIX_RangeOfIPAddressesDeps_STUB.h"
#endif
