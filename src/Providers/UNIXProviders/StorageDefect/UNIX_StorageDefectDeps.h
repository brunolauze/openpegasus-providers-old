
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageDefectDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageDefectDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageDefectDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageDefectDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageDefectDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageDefectDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageDefectDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageDefectDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageDefectDeps_TRU64.h"
#else
#	include "UNIX_StorageDefectDeps_STUB.h"
#endif
