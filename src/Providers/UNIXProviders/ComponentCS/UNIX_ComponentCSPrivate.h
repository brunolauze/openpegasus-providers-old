
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComponentCSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComponentCSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComponentCSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComponentCSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComponentCSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComponentCSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComponentCSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComponentCSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComponentCSPrivate_TRU64.h"
#else
#	include "UNIX_ComponentCSPrivate_STUB.h"
#endif
