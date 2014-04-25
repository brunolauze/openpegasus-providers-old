
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Phase1SAUsedForPhase2Deps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Phase1SAUsedForPhase2Deps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Phase1SAUsedForPhase2Deps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Phase1SAUsedForPhase2Deps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Phase1SAUsedForPhase2Deps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Phase1SAUsedForPhase2Deps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Phase1SAUsedForPhase2Deps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Phase1SAUsedForPhase2Deps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Phase1SAUsedForPhase2Deps_TRU64.h"
#else
#	include "UNIX_Phase1SAUsedForPhase2Deps_STUB.h"
#endif
