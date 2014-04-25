
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageDefectPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageDefectPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageDefectPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageDefectPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageDefectPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageDefectPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageDefectPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageDefectPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageDefectPrivate_TRU64.h"
#else
#	include "UNIX_StorageDefectPrivate_STUB.h"
#endif
