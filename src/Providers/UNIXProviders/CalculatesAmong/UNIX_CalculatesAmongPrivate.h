
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculatesAmongPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculatesAmongPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculatesAmongPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculatesAmongPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculatesAmongPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculatesAmongPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculatesAmongPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculatesAmongPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculatesAmongPrivate_TRU64.h"
#else
#	include "UNIX_CalculatesAmongPrivate_STUB.h"
#endif
