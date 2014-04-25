
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdjacentSlotsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdjacentSlotsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdjacentSlotsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdjacentSlotsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdjacentSlotsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdjacentSlotsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdjacentSlotsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdjacentSlotsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdjacentSlotsPrivate_TRU64.h"
#else
#	include "UNIX_AdjacentSlotsPrivate_STUB.h"
#endif
