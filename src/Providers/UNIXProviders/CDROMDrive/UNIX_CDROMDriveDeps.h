
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CDROMDriveDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CDROMDriveDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CDROMDriveDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CDROMDriveDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CDROMDriveDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CDROMDriveDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CDROMDriveDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CDROMDriveDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CDROMDriveDeps_TRU64.h"
#else
#	include "UNIX_CDROMDriveDeps_STUB.h"
#endif
