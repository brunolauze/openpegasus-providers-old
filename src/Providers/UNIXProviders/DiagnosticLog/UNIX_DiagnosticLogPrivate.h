
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiagnosticLogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiagnosticLogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiagnosticLogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiagnosticLogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiagnosticLogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiagnosticLogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiagnosticLogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiagnosticLogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiagnosticLogPrivate_TRU64.h"
#else
#	include "UNIX_DiagnosticLogPrivate_STUB.h"
#endif
