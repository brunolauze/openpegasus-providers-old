
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DataFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DataFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DataFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DataFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DataFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DataFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DataFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DataFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DataFileDeps_TRU64.h"
#else
#	include "UNIX_DataFileDeps_STUB.h"
#endif
