
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SecuritySensitivityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SecuritySensitivityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SecuritySensitivityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SecuritySensitivityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SecuritySensitivityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SecuritySensitivityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SecuritySensitivityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SecuritySensitivityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SecuritySensitivityPrivate_TRU64.h"
#else
#	include "UNIX_SecuritySensitivityPrivate_STUB.h"
#endif
