
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StoragePoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StoragePoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StoragePoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StoragePoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StoragePoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StoragePoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StoragePoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StoragePoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StoragePoolDeps_TRU64.h"
#else
#	include "UNIX_StoragePoolDeps_STUB.h"
#endif
