
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeadTailDropperDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeadTailDropperDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeadTailDropperDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeadTailDropperDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeadTailDropperDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeadTailDropperDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeadTailDropperDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeadTailDropperDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeadTailDropperDeps_TRU64.h"
#else
#	include "UNIX_HeadTailDropperDeps_STUB.h"
#endif
