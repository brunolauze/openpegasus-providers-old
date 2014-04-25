
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DataFilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DataFilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DataFilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DataFilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DataFilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DataFilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DataFilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DataFilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DataFilePrivate_TRU64.h"
#else
#	include "UNIX_DataFilePrivate_STUB.h"
#endif
