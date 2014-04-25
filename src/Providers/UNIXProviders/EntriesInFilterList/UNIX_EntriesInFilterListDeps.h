
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EntriesInFilterListDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EntriesInFilterListDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EntriesInFilterListDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EntriesInFilterListDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EntriesInFilterListDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EntriesInFilterListDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EntriesInFilterListDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EntriesInFilterListDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EntriesInFilterListDeps_TRU64.h"
#else
#	include "UNIX_EntriesInFilterListDeps_STUB.h"
#endif
