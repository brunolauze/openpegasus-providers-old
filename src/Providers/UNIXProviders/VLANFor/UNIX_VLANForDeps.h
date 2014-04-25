
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VLANForDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VLANForDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VLANForDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VLANForDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VLANForDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VLANForDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VLANForDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VLANForDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VLANForDeps_TRU64.h"
#else
#	include "UNIX_VLANForDeps_STUB.h"
#endif
