
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReplaceableProductFRUDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReplaceableProductFRUDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReplaceableProductFRUDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReplaceableProductFRUDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReplaceableProductFRUDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReplaceableProductFRUDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReplaceableProductFRUDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReplaceableProductFRUDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReplaceableProductFRUDeps_TRU64.h"
#else
#	include "UNIX_ReplaceableProductFRUDeps_STUB.h"
#endif
