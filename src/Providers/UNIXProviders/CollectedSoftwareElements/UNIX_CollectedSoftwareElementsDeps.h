
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectedSoftwareElementsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectedSoftwareElementsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectedSoftwareElementsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectedSoftwareElementsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectedSoftwareElementsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectedSoftwareElementsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectedSoftwareElementsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectedSoftwareElementsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectedSoftwareElementsDeps_TRU64.h"
#else
#	include "UNIX_CollectedSoftwareElementsDeps_STUB.h"
#endif
