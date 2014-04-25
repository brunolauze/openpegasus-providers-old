
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortOnFCAdapterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortOnFCAdapterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortOnFCAdapterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortOnFCAdapterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortOnFCAdapterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortOnFCAdapterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortOnFCAdapterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortOnFCAdapterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortOnFCAdapterDeps_TRU64.h"
#else
#	include "UNIX_FibrePortOnFCAdapterDeps_STUB.h"
#endif
