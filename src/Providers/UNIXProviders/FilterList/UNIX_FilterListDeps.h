
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterListDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterListDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterListDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterListDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterListDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterListDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterListDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterListDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterListDeps_TRU64.h"
#else
#	include "UNIX_FilterListDeps_STUB.h"
#endif
