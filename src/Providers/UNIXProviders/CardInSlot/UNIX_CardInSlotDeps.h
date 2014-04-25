
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CardInSlotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CardInSlotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CardInSlotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CardInSlotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CardInSlotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CardInSlotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CardInSlotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CardInSlotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CardInSlotDeps_TRU64.h"
#else
#	include "UNIX_CardInSlotDeps_STUB.h"
#endif
