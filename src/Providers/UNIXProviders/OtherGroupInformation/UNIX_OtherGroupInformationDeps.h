
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherGroupInformationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherGroupInformationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherGroupInformationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherGroupInformationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherGroupInformationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherGroupInformationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherGroupInformationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherGroupInformationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherGroupInformationDeps_TRU64.h"
#else
#	include "UNIX_OtherGroupInformationDeps_STUB.h"
#endif
