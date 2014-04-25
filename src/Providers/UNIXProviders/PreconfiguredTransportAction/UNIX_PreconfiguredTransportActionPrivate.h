
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreconfiguredTransportActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreconfiguredTransportActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreconfiguredTransportActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreconfiguredTransportActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreconfiguredTransportActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreconfiguredTransportActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreconfiguredTransportActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreconfiguredTransportActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreconfiguredTransportActionPrivate_TRU64.h"
#else
#	include "UNIX_PreconfiguredTransportActionPrivate_STUB.h"
#endif
