
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CLPCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CLPCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CLPCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CLPCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CLPCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CLPCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CLPCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CLPCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CLPCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_CLPCapabilitiesPrivate_STUB.h"
#endif
