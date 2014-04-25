
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RegisteredSubProfilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RegisteredSubProfilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RegisteredSubProfilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RegisteredSubProfilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RegisteredSubProfilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RegisteredSubProfilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RegisteredSubProfilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RegisteredSubProfilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RegisteredSubProfilePrivate_TRU64.h"
#else
#	include "UNIX_RegisteredSubProfilePrivate_STUB.h"
#endif
