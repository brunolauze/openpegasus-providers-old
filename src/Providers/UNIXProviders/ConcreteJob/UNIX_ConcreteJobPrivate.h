
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConcreteJobPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConcreteJobPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConcreteJobPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConcreteJobPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConcreteJobPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConcreteJobPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConcreteJobPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConcreteJobPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConcreteJobPrivate_TRU64.h"
#else
#	include "UNIX_ConcreteJobPrivate_STUB.h"
#endif
