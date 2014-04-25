
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IdentityContextPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IdentityContextPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IdentityContextPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IdentityContextPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IdentityContextPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IdentityContextPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IdentityContextPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IdentityContextPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IdentityContextPrivate_TRU64.h"
#else
#	include "UNIX_IdentityContextPrivate_STUB.h"
#endif
