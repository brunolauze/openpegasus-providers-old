
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstModificationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstModificationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstModificationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstModificationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstModificationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstModificationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstModificationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstModificationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstModificationPrivate_TRU64.h"
#else
#	include "UNIX_InstModificationPrivate_STUB.h"
#endif
