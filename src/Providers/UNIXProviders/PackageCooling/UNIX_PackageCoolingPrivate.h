
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageCoolingPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageCoolingPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageCoolingPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageCoolingPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageCoolingPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageCoolingPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageCoolingPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageCoolingPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageCoolingPrivate_TRU64.h"
#else
#	include "UNIX_PackageCoolingPrivate_STUB.h"
#endif
