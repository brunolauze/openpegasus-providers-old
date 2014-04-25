
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LocalizationCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LocalizationCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LocalizationCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LocalizationCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LocalizationCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LocalizationCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LocalizationCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LocalizationCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LocalizationCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_LocalizationCapabilitiesDeps_STUB.h"
#endif
