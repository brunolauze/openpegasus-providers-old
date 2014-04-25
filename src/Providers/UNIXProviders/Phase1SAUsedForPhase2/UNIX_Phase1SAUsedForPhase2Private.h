
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Phase1SAUsedForPhase2Private_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Phase1SAUsedForPhase2Private_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Phase1SAUsedForPhase2Private_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Phase1SAUsedForPhase2Private_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Phase1SAUsedForPhase2Private_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Phase1SAUsedForPhase2Private_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Phase1SAUsedForPhase2Private_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Phase1SAUsedForPhase2Private_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Phase1SAUsedForPhase2Private_TRU64.h"
#else
#	include "UNIX_Phase1SAUsedForPhase2Private_STUB.h"
#endif
