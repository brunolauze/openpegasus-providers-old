
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceAffectsElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceAffectsElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceAffectsElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceAffectsElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceAffectsElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceAffectsElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceAffectsElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceAffectsElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceAffectsElementPrivate_TRU64.h"
#else
#	include "UNIX_ServiceAffectsElementPrivate_STUB.h"
#endif
