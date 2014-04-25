
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPHeadersFilterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPHeadersFilterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPHeadersFilterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPHeadersFilterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPHeadersFilterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPHeadersFilterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPHeadersFilterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPHeadersFilterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPHeadersFilterPrivate_TRU64.h"
#else
#	include "UNIX_IPHeadersFilterPrivate_STUB.h"
#endif
