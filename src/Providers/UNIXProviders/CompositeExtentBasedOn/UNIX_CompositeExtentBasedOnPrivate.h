
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompositeExtentBasedOnPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompositeExtentBasedOnPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompositeExtentBasedOnPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompositeExtentBasedOnPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompositeExtentBasedOnPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompositeExtentBasedOnPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompositeExtentBasedOnPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompositeExtentBasedOnPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompositeExtentBasedOnPrivate_TRU64.h"
#else
#	include "UNIX_CompositeExtentBasedOnPrivate_STUB.h"
#endif
