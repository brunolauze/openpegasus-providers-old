
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherPersonInformationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherPersonInformationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherPersonInformationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherPersonInformationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherPersonInformationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherPersonInformationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherPersonInformationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherPersonInformationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherPersonInformationDeps_TRU64.h"
#else
#	include "UNIX_OtherPersonInformationDeps_STUB.h"
#endif
