
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConfigurationReportingServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConfigurationReportingServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConfigurationReportingServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConfigurationReportingServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConfigurationReportingServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConfigurationReportingServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConfigurationReportingServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConfigurationReportingServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConfigurationReportingServiceDeps_TRU64.h"
#else
#	include "UNIX_ConfigurationReportingServiceDeps_STUB.h"
#endif
