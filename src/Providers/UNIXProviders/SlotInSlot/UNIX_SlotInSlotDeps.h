
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SlotInSlotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SlotInSlotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SlotInSlotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SlotInSlotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SlotInSlotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SlotInSlotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SlotInSlotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SlotInSlotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SlotInSlotDeps_TRU64.h"
#else
#	include "UNIX_SlotInSlotDeps_STUB.h"
#endif
