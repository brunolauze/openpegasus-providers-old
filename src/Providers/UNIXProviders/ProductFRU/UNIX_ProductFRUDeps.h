
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductFRUDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductFRUDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductFRUDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductFRUDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductFRUDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductFRUDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductFRUDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductFRUDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductFRUDeps_TRU64.h"
#else
#	include "UNIX_ProductFRUDeps_STUB.h"
#endif
