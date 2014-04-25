
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSISessionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSISessionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSISessionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSISessionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSISessionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSISessionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSISessionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSISessionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSISessionPrivate_TRU64.h"
#else
#	include "UNIX_iSCSISessionPrivate_STUB.h"
#endif
