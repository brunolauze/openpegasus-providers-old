
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPAddressRangeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPAddressRangeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPAddressRangeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPAddressRangeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPAddressRangeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPAddressRangeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPAddressRangeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPAddressRangeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPAddressRangeDeps_TRU64.h"
#else
#	include "UNIX_IPAddressRangeDeps_STUB.h"
#endif
