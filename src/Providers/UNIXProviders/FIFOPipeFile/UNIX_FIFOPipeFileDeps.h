
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FIFOPipeFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FIFOPipeFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FIFOPipeFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FIFOPipeFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FIFOPipeFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FIFOPipeFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FIFOPipeFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FIFOPipeFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FIFOPipeFileDeps_TRU64.h"
#else
#	include "UNIX_FIFOPipeFileDeps_STUB.h"
#endif
