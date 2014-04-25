
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ASBGPEndpointsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ASBGPEndpointsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ASBGPEndpointsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ASBGPEndpointsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ASBGPEndpointsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ASBGPEndpointsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ASBGPEndpointsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ASBGPEndpointsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ASBGPEndpointsPrivate_TRU64.h"
#else
#	include "UNIX_ASBGPEndpointsPrivate_STUB.h"
#endif
