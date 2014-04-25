
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementSecuritySensitivityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementSecuritySensitivityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementSecuritySensitivityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementSecuritySensitivityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementSecuritySensitivityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementSecuritySensitivityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementSecuritySensitivityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementSecuritySensitivityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementSecuritySensitivityDeps_TRU64.h"
#else
#	include "UNIX_ElementSecuritySensitivityDeps_STUB.h"
#endif
