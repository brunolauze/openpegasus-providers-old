
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComponentCSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComponentCSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComponentCSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComponentCSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComponentCSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComponentCSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComponentCSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComponentCSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComponentCSDeps_TRU64.h"
#else
#	include "UNIX_ComponentCSDeps_STUB.h"
#endif
