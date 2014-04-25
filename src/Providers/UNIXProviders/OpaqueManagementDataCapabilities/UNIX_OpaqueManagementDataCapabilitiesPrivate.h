
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate_STUB.h"
#endif
