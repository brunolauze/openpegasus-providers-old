
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizedOnSidePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizedOnSidePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizedOnSidePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizedOnSidePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizedOnSidePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizedOnSidePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizedOnSidePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizedOnSidePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizedOnSidePrivate_TRU64.h"
#else
#	include "UNIX_RealizedOnSidePrivate_STUB.h"
#endif
