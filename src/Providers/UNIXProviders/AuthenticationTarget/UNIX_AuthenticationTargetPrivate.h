
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthenticationTargetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthenticationTargetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthenticationTargetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthenticationTargetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthenticationTargetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthenticationTargetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthenticationTargetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthenticationTargetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthenticationTargetPrivate_TRU64.h"
#else
#	include "UNIX_AuthenticationTargetPrivate_STUB.h"
#endif
