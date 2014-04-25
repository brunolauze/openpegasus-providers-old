
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_iSCSICapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_iSCSICapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_iSCSICapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_iSCSICapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_iSCSICapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_iSCSICapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_iSCSICapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_iSCSICapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_iSCSICapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_iSCSICapabilitiesDeps_STUB.h"
#endif
