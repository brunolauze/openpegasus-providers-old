
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KeystoreDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KeystoreDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KeystoreDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KeystoreDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KeystoreDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KeystoreDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KeystoreDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KeystoreDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KeystoreDeps_TRU64.h"
#else
#	include "UNIX_KeystoreDeps_STUB.h"
#endif
