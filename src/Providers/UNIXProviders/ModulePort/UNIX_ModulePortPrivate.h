
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ModulePortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ModulePortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ModulePortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ModulePortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ModulePortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ModulePortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ModulePortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ModulePortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ModulePortPrivate_TRU64.h"
#else
#	include "UNIX_ModulePortPrivate_STUB.h"
#endif
