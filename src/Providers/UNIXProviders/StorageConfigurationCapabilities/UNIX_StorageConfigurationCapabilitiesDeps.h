
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageConfigurationCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_StorageConfigurationCapabilitiesDeps_STUB.h"
#endif
