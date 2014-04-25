
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchesAmongPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchesAmongPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchesAmongPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchesAmongPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchesAmongPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchesAmongPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchesAmongPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchesAmongPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchesAmongPrivate_TRU64.h"
#else
#	include "UNIX_SwitchesAmongPrivate_STUB.h"
#endif
