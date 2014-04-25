
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProductSupportDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProductSupportDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProductSupportDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProductSupportDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProductSupportDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProductSupportDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProductSupportDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProductSupportDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProductSupportDeps_TRU64.h"
#else
#	include "UNIX_ProductSupportDeps_STUB.h"
#endif
