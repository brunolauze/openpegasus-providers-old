
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementSecuritySensitivityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementSecuritySensitivityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementSecuritySensitivityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementSecuritySensitivityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementSecuritySensitivityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementSecuritySensitivityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementSecuritySensitivityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementSecuritySensitivityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementSecuritySensitivityPrivate_TRU64.h"
#else
#	include "UNIX_ElementSecuritySensitivityPrivate_STUB.h"
#endif
