
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KeystorePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KeystorePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KeystorePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KeystorePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KeystorePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KeystorePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KeystorePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KeystorePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KeystorePrivate_TRU64.h"
#else
#	include "UNIX_KeystorePrivate_STUB.h"
#endif
