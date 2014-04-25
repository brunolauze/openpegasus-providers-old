
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKERulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKERulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKERulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKERulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKERulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKERulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKERulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKERulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKERulePrivate_TRU64.h"
#else
#	include "UNIX_IKERulePrivate_STUB.h"
#endif
