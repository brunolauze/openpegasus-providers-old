
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnsignedPublicKeyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnsignedPublicKeyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnsignedPublicKeyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnsignedPublicKeyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnsignedPublicKeyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnsignedPublicKeyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnsignedPublicKeyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnsignedPublicKeyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnsignedPublicKeyDeps_TRU64.h"
#else
#	include "UNIX_UnsignedPublicKeyDeps_STUB.h"
#endif
