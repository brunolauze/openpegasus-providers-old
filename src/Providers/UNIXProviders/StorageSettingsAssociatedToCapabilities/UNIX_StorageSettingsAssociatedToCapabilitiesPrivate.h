
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_StorageSettingsAssociatedToCapabilitiesPrivate_STUB.h"
#endif
