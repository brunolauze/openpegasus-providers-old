
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DNSSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DNSSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DNSSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DNSSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DNSSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DNSSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DNSSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DNSSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DNSSettingDataDeps_TRU64.h"
#else
#	include "UNIX_DNSSettingDataDeps_STUB.h"
#endif
