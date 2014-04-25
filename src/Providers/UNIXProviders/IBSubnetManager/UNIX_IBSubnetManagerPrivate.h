
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IBSubnetManagerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IBSubnetManagerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IBSubnetManagerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IBSubnetManagerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IBSubnetManagerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IBSubnetManagerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IBSubnetManagerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IBSubnetManagerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IBSubnetManagerPrivate_TRU64.h"
#else
#	include "UNIX_IBSubnetManagerPrivate_STUB.h"
#endif
