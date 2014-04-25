
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessorAllocationSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_ProcessorAllocationSettingDataPrivate_STUB.h"
#endif
