
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizedOnSideDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizedOnSideDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizedOnSideDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizedOnSideDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizedOnSideDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizedOnSideDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizedOnSideDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizedOnSideDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizedOnSideDeps_TRU64.h"
#else
#	include "UNIX_RealizedOnSideDeps_STUB.h"
#endif
