
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_EthernetPortAllocationSettingDataPrivate_STUB.h"
#endif
