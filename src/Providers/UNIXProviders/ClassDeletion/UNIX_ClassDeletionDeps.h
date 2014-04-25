
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassDeletionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassDeletionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassDeletionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassDeletionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassDeletionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassDeletionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassDeletionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassDeletionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassDeletionDeps_TRU64.h"
#else
#	include "UNIX_ClassDeletionDeps_STUB.h"
#endif
