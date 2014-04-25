
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_OpaqueManagementDataCapabilitiesDeps_STUB.h"
#endif
