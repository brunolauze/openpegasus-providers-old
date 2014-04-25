
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecTransportActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecTransportActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecTransportActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecTransportActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecTransportActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecTransportActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecTransportActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecTransportActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecTransportActionPrivate_TRU64.h"
#else
#	include "UNIX_IPsecTransportActionPrivate_STUB.h"
#endif
