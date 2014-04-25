
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ISDNModemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ISDNModemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ISDNModemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ISDNModemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ISDNModemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ISDNModemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ISDNModemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ISDNModemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ISDNModemPrivate_TRU64.h"
#else
#	include "UNIX_ISDNModemPrivate_STUB.h"
#endif
