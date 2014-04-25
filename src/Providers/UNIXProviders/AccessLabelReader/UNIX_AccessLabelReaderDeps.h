
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccessLabelReaderDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccessLabelReaderDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccessLabelReaderDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccessLabelReaderDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccessLabelReaderDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccessLabelReaderDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccessLabelReaderDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccessLabelReaderDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccessLabelReaderDeps_TRU64.h"
#else
#	include "UNIX_AccessLabelReaderDeps_STUB.h"
#endif
