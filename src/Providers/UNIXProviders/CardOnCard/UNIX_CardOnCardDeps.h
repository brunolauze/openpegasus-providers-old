
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CardOnCardDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CardOnCardDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CardOnCardDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CardOnCardDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CardOnCardDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CardOnCardDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CardOnCardDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CardOnCardDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CardOnCardDeps_TRU64.h"
#else
#	include "UNIX_CardOnCardDeps_STUB.h"
#endif
