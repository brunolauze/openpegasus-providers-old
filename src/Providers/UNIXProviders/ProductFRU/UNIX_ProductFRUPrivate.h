
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductFRUPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductFRUPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductFRUPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductFRUPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductFRUPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductFRUPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductFRUPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductFRUPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductFRUPrivate_TRU64.h"
#else
#	include "UNIX_ProductFRUPrivate_STUB.h"
#endif
