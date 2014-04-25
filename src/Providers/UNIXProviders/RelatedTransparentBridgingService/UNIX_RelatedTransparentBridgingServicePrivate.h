
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RelatedTransparentBridgingServicePrivate_TRU64.h"
#else
#	include "UNIX_RelatedTransparentBridgingServicePrivate_STUB.h"
#endif
