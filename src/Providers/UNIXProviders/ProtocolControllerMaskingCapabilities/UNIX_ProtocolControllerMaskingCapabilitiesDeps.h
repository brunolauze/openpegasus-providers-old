
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_ProtocolControllerMaskingCapabilitiesDeps_STUB.h"
#endif
