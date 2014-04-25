
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterCollectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterCollectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterCollectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterCollectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterCollectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterCollectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterCollectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterCollectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterCollectionPrivate_TRU64.h"
#else
#	include "UNIX_FilterCollectionPrivate_STUB.h"
#endif
