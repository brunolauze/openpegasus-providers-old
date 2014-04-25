
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SlotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SlotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SlotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SlotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SlotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SlotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SlotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SlotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SlotDeps_TRU64.h"
#else
#	include "UNIX_SlotDeps_STUB.h"
#endif
