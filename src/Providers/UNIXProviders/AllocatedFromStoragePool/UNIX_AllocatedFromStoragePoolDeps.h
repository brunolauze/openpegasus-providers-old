
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocatedFromStoragePoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocatedFromStoragePoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocatedFromStoragePoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocatedFromStoragePoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocatedFromStoragePoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocatedFromStoragePoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocatedFromStoragePoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocatedFromStoragePoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocatedFromStoragePoolDeps_TRU64.h"
#else
#	include "UNIX_AllocatedFromStoragePoolDeps_STUB.h"
#endif
