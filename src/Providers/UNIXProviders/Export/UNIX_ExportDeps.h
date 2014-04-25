
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExportDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExportDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExportDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExportDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExportDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExportDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExportDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExportDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExportDeps_TRU64.h"
#else
#	include "UNIX_ExportDeps_STUB.h"
#endif
