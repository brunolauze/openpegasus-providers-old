
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageHardwareIDDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageHardwareIDDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageHardwareIDDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageHardwareIDDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageHardwareIDDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageHardwareIDDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageHardwareIDDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageHardwareIDDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageHardwareIDDeps_TRU64.h"
#else
#	include "UNIX_StorageHardwareIDDeps_STUB.h"
#endif
