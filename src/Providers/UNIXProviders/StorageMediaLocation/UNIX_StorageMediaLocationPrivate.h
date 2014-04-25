
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageMediaLocationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageMediaLocationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageMediaLocationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageMediaLocationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageMediaLocationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageMediaLocationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageMediaLocationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageMediaLocationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageMediaLocationPrivate_TRU64.h"
#else
#	include "UNIX_StorageMediaLocationPrivate_STUB.h"
#endif
