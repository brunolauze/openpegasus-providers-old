
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterEntryDeps_TRU64.h"
#else
#	include "UNIX_FilterEntryDeps_STUB.h"
#endif
