
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesDeps_STUB.h"
#endif
