
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StoragePoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StoragePoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StoragePoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StoragePoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StoragePoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StoragePoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StoragePoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StoragePoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StoragePoolPrivate_TRU64.h"
#else
#	include "UNIX_StoragePoolPrivate_STUB.h"
#endif
