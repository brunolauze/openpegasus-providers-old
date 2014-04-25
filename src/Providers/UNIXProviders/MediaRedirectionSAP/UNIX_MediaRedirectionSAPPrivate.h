
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaRedirectionSAPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaRedirectionSAPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaRedirectionSAPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaRedirectionSAPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaRedirectionSAPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaRedirectionSAPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaRedirectionSAPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaRedirectionSAPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaRedirectionSAPPrivate_TRU64.h"
#else
#	include "UNIX_MediaRedirectionSAPPrivate_STUB.h"
#endif
