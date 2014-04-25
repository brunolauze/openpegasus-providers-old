
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherPersonInformationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherPersonInformationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherPersonInformationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherPersonInformationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherPersonInformationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherPersonInformationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherPersonInformationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherPersonInformationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherPersonInformationPrivate_TRU64.h"
#else
#	include "UNIX_OtherPersonInformationPrivate_STUB.h"
#endif
