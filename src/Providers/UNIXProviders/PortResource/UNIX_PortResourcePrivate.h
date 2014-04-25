
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortResourcePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortResourcePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortResourcePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortResourcePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortResourcePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortResourcePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortResourcePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortResourcePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortResourcePrivate_TRU64.h"
#else
#	include "UNIX_PortResourcePrivate_STUB.h"
#endif
