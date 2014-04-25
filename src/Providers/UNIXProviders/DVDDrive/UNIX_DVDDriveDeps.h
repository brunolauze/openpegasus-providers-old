
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DVDDriveDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DVDDriveDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DVDDriveDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DVDDriveDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DVDDriveDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DVDDriveDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DVDDriveDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DVDDriveDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DVDDriveDeps_TRU64.h"
#else
#	include "UNIX_DVDDriveDeps_STUB.h"
#endif
