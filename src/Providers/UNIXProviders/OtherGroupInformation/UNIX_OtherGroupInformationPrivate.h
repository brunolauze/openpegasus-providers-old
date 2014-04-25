
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherGroupInformationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherGroupInformationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherGroupInformationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherGroupInformationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherGroupInformationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherGroupInformationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherGroupInformationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherGroupInformationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherGroupInformationPrivate_TRU64.h"
#else
#	include "UNIX_OtherGroupInformationPrivate_STUB.h"
#endif
