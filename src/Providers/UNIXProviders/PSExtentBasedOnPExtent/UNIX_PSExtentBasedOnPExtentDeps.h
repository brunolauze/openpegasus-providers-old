
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PSExtentBasedOnPExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PSExtentBasedOnPExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PSExtentBasedOnPExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PSExtentBasedOnPExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PSExtentBasedOnPExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PSExtentBasedOnPExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PSExtentBasedOnPExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PSExtentBasedOnPExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PSExtentBasedOnPExtentDeps_TRU64.h"
#else
#	include "UNIX_PSExtentBasedOnPExtentDeps_STUB.h"
#endif
