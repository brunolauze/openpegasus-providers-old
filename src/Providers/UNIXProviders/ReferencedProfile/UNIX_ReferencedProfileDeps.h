
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReferencedProfileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReferencedProfileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReferencedProfileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReferencedProfileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReferencedProfileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReferencedProfileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReferencedProfileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReferencedProfileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReferencedProfileDeps_TRU64.h"
#else
#	include "UNIX_ReferencedProfileDeps_STUB.h"
#endif
