
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeatPipePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeatPipePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeatPipePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeatPipePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeatPipePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeatPipePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeatPipePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeatPipePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeatPipePrivate_TRU64.h"
#else
#	include "UNIX_HeatPipePrivate_STUB.h"
#endif
