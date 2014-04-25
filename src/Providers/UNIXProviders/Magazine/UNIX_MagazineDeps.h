
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MagazineDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MagazineDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MagazineDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MagazineDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MagazineDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MagazineDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MagazineDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MagazineDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MagazineDeps_TRU64.h"
#else
#	include "UNIX_MagazineDeps_STUB.h"
#endif
