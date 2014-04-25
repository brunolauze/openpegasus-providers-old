
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPSOFilterEntryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPSOFilterEntryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPSOFilterEntryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPSOFilterEntryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPSOFilterEntryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPSOFilterEntryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPSOFilterEntryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPSOFilterEntryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPSOFilterEntryDeps_TRU64.h"
#else
#	include "UNIX_IPSOFilterEntryDeps_STUB.h"
#endif
