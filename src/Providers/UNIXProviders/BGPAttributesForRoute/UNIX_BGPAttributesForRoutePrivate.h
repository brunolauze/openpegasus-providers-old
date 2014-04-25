
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPAttributesForRoutePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPAttributesForRoutePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPAttributesForRoutePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPAttributesForRoutePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPAttributesForRoutePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPAttributesForRoutePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPAttributesForRoutePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPAttributesForRoutePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPAttributesForRoutePrivate_TRU64.h"
#else
#	include "UNIX_BGPAttributesForRoutePrivate_STUB.h"
#endif
