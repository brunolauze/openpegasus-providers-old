
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiPortCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiPortCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiPortCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiPortCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiPortCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiPortCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiPortCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiPortCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiPortCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_WiFiPortCapabilitiesPrivate_STUB.h"
#endif
