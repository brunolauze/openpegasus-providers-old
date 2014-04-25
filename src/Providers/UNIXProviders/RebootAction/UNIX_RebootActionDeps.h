
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RebootActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RebootActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RebootActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RebootActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RebootActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RebootActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RebootActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RebootActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RebootActionDeps_TRU64.h"
#else
#	include "UNIX_RebootActionDeps_STUB.h"
#endif
