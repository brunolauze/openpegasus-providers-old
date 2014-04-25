
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSICapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSICapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSICapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSICapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSICapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSICapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSICapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSICapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSICapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_iSCSICapabilitiesPrivate_STUB.h"
#endif
