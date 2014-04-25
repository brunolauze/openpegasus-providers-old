
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ModulePortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ModulePortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ModulePortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ModulePortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ModulePortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ModulePortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ModulePortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ModulePortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ModulePortDeps_TRU64.h"
#else
#	include "UNIX_ModulePortDeps_STUB.h"
#endif
