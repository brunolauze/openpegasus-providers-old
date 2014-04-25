
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharingDependencyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharingDependencyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharingDependencyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharingDependencyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharingDependencyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharingDependencyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharingDependencyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharingDependencyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharingDependencyPrivate_TRU64.h"
#else
#	include "UNIX_SharingDependencyPrivate_STUB.h"
#endif
