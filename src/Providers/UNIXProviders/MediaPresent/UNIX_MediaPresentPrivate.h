
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaPresentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaPresentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaPresentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaPresentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaPresentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaPresentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaPresentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaPresentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaPresentPrivate_TRU64.h"
#else
#	include "UNIX_MediaPresentPrivate_STUB.h"
#endif
