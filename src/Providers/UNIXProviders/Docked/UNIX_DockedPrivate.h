
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DockedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DockedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DockedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DockedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DockedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DockedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DockedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DockedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DockedPrivate_TRU64.h"
#else
#	include "UNIX_DockedPrivate_STUB.h"
#endif
