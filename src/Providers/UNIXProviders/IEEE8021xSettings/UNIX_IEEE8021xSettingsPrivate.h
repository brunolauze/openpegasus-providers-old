
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IEEE8021xSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IEEE8021xSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IEEE8021xSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IEEE8021xSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IEEE8021xSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IEEE8021xSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IEEE8021xSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IEEE8021xSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IEEE8021xSettingsPrivate_TRU64.h"
#else
#	include "UNIX_IEEE8021xSettingsPrivate_STUB.h"
#endif
