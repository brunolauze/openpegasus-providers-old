
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogManagesRecordDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogManagesRecordDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogManagesRecordDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogManagesRecordDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogManagesRecordDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogManagesRecordDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogManagesRecordDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogManagesRecordDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogManagesRecordDeps_TRU64.h"
#else
#	include "UNIX_LogManagesRecordDeps_STUB.h"
#endif
