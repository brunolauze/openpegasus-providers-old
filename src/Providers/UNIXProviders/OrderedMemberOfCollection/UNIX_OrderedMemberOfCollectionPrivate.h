
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrderedMemberOfCollectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrderedMemberOfCollectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrderedMemberOfCollectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrderedMemberOfCollectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrderedMemberOfCollectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrderedMemberOfCollectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrderedMemberOfCollectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrderedMemberOfCollectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrderedMemberOfCollectionPrivate_TRU64.h"
#else
#	include "UNIX_OrderedMemberOfCollectionPrivate_STUB.h"
#endif
