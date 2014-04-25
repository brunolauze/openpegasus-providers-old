
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Hdr8021FilterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Hdr8021FilterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Hdr8021FilterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Hdr8021FilterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Hdr8021FilterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Hdr8021FilterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Hdr8021FilterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Hdr8021FilterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Hdr8021FilterDeps_TRU64.h"
#else
#	include "UNIX_Hdr8021FilterDeps_STUB.h"
#endif
