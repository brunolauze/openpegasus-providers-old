
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RelatedTransparentBridgingServiceDeps_TRU64.h"
#else
#	include "UNIX_RelatedTransparentBridgingServiceDeps_STUB.h"
#endif
