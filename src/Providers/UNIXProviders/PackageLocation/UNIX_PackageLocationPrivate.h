
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageLocationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageLocationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageLocationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageLocationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageLocationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageLocationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageLocationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageLocationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageLocationPrivate_TRU64.h"
#else
#	include "UNIX_PackageLocationPrivate_STUB.h"
#endif
