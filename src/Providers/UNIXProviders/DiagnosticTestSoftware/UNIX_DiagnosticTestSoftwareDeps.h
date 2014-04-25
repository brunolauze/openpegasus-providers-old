
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiagnosticTestSoftwareDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiagnosticTestSoftwareDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiagnosticTestSoftwareDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiagnosticTestSoftwareDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiagnosticTestSoftwareDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiagnosticTestSoftwareDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiagnosticTestSoftwareDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiagnosticTestSoftwareDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiagnosticTestSoftwareDeps_TRU64.h"
#else
#	include "UNIX_DiagnosticTestSoftwareDeps_STUB.h"
#endif
