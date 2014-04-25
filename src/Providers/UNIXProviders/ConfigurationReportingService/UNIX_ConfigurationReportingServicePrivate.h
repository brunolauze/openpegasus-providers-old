
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConfigurationReportingServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConfigurationReportingServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConfigurationReportingServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConfigurationReportingServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConfigurationReportingServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConfigurationReportingServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConfigurationReportingServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConfigurationReportingServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConfigurationReportingServicePrivate_TRU64.h"
#else
#	include "UNIX_ConfigurationReportingServicePrivate_STUB.h"
#endif
