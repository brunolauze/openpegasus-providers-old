
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SecuritySensitivityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SecuritySensitivityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SecuritySensitivityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SecuritySensitivityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SecuritySensitivityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SecuritySensitivityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SecuritySensitivityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SecuritySensitivityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SecuritySensitivityDeps_TRU64.h"
#else
#	include "UNIX_SecuritySensitivityDeps_STUB.h"
#endif
