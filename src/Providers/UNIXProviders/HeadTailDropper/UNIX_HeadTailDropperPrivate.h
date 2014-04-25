
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HeadTailDropperPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HeadTailDropperPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HeadTailDropperPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HeadTailDropperPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HeadTailDropperPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HeadTailDropperPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HeadTailDropperPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HeadTailDropperPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HeadTailDropperPrivate_TRU64.h"
#else
#	include "UNIX_HeadTailDropperPrivate_STUB.h"
#endif
