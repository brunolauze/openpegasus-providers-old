
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareElementChecksDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareElementChecksDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareElementChecksDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareElementChecksDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareElementChecksDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareElementChecksDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareElementChecksDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareElementChecksDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareElementChecksDeps_TRU64.h"
#else
#	include "UNIX_SoftwareElementChecksDeps_STUB.h"
#endif
