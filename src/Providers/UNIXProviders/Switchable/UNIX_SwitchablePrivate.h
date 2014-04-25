
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchablePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchablePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchablePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchablePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchablePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchablePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchablePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchablePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchablePrivate_TRU64.h"
#else
#	include "UNIX_SwitchablePrivate_STUB.h"
#endif
