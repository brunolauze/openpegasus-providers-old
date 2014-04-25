
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedBGPAttributesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedBGPAttributesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedBGPAttributesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedBGPAttributesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedBGPAttributesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedBGPAttributesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedBGPAttributesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedBGPAttributesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedBGPAttributesDeps_TRU64.h"
#else
#	include "UNIX_HostedBGPAttributesDeps_STUB.h"
#endif
