
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PublicPrivateKeyPairDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PublicPrivateKeyPairDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PublicPrivateKeyPairDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PublicPrivateKeyPairDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PublicPrivateKeyPairDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PublicPrivateKeyPairDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PublicPrivateKeyPairDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PublicPrivateKeyPairDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PublicPrivateKeyPairDeps_TRU64.h"
#else
#	include "UNIX_PublicPrivateKeyPairDeps_STUB.h"
#endif
