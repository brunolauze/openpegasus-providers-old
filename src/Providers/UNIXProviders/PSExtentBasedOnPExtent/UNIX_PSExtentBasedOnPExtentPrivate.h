
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PSExtentBasedOnPExtentPrivate_TRU64.h"
#else
#	include "UNIX_PSExtentBasedOnPExtentPrivate_STUB.h"
#endif
