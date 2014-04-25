
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSISessionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSISessionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSISessionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSISessionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSISessionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSISessionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSISessionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSISessionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSISessionDeps_TRU64.h"
#else
#	include "UNIX_iSCSISessionDeps_STUB.h"
#endif
