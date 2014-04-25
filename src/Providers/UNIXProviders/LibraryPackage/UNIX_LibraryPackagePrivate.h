
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LibraryPackagePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LibraryPackagePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LibraryPackagePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LibraryPackagePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LibraryPackagePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LibraryPackagePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LibraryPackagePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LibraryPackagePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LibraryPackagePrivate_TRU64.h"
#else
#	include "UNIX_LibraryPackagePrivate_STUB.h"
#endif
