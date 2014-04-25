
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementAsUserPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementAsUserPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementAsUserPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementAsUserPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementAsUserPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementAsUserPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementAsUserPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementAsUserPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementAsUserPrivate_TRU64.h"
#else
#	include "UNIX_ElementAsUserPrivate_STUB.h"
#endif
