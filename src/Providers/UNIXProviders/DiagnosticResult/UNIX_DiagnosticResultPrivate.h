
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiagnosticResultPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiagnosticResultPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiagnosticResultPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiagnosticResultPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiagnosticResultPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiagnosticResultPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiagnosticResultPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiagnosticResultPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiagnosticResultPrivate_TRU64.h"
#else
#	include "UNIX_DiagnosticResultPrivate_STUB.h"
#endif
