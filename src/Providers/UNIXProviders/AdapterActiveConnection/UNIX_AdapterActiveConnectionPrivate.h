
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdapterActiveConnectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdapterActiveConnectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdapterActiveConnectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdapterActiveConnectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdapterActiveConnectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdapterActiveConnectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdapterActiveConnectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdapterActiveConnectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdapterActiveConnectionPrivate_TRU64.h"
#else
#	include "UNIX_AdapterActiveConnectionPrivate_STUB.h"
#endif
