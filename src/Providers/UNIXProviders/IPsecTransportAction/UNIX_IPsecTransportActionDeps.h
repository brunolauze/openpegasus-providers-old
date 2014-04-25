
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecTransportActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecTransportActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecTransportActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecTransportActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecTransportActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecTransportActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecTransportActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecTransportActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecTransportActionDeps_TRU64.h"
#else
#	include "UNIX_IPsecTransportActionDeps_STUB.h"
#endif
