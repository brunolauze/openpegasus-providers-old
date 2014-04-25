
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSISessionFailuresPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSISessionFailuresPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSISessionFailuresPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSISessionFailuresPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSISessionFailuresPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSISessionFailuresPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSISessionFailuresPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSISessionFailuresPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSISessionFailuresPrivate_TRU64.h"
#else
#	include "UNIX_iSCSISessionFailuresPrivate_STUB.h"
#endif
