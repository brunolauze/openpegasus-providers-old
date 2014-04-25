
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PublicPrivateKeyPairPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PublicPrivateKeyPairPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PublicPrivateKeyPairPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PublicPrivateKeyPairPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PublicPrivateKeyPairPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PublicPrivateKeyPairPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PublicPrivateKeyPairPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PublicPrivateKeyPairPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PublicPrivateKeyPairPrivate_TRU64.h"
#else
#	include "UNIX_PublicPrivateKeyPairPrivate_STUB.h"
#endif
