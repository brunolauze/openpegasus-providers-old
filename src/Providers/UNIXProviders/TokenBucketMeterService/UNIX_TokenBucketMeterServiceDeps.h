
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TokenBucketMeterServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TokenBucketMeterServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TokenBucketMeterServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TokenBucketMeterServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TokenBucketMeterServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TokenBucketMeterServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TokenBucketMeterServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TokenBucketMeterServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TokenBucketMeterServiceDeps_TRU64.h"
#else
#	include "UNIX_TokenBucketMeterServiceDeps_STUB.h"
#endif
