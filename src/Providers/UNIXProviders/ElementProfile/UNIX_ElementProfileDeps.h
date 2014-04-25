
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementProfileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementProfileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementProfileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementProfileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementProfileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementProfileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementProfileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementProfileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementProfileDeps_TRU64.h"
#else
#	include "UNIX_ElementProfileDeps_STUB.h"
#endif
