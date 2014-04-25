
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageSettingWithHintsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageSettingWithHintsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageSettingWithHintsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageSettingWithHintsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageSettingWithHintsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageSettingWithHintsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageSettingWithHintsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageSettingWithHintsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageSettingWithHintsPrivate_TRU64.h"
#else
#	include "UNIX_StorageSettingWithHintsPrivate_STUB.h"
#endif
