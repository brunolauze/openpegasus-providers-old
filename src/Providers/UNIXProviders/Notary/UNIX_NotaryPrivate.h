
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NotaryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NotaryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NotaryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NotaryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NotaryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NotaryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NotaryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NotaryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NotaryPrivate_TRU64.h"
#else
#	include "UNIX_NotaryPrivate_STUB.h"
#endif
