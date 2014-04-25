
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdjacentSlotsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdjacentSlotsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdjacentSlotsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdjacentSlotsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdjacentSlotsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdjacentSlotsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdjacentSlotsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdjacentSlotsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdjacentSlotsDeps_TRU64.h"
#else
#	include "UNIX_AdjacentSlotsDeps_STUB.h"
#endif
