
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VLANPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VLANPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VLANPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VLANPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VLANPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VLANPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VLANPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VLANPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VLANPrivate_TRU64.h"
#else
#	include "UNIX_VLANPrivate_STUB.h"
#endif
