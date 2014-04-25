
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PCMCIAControllerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PCMCIAControllerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PCMCIAControllerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PCMCIAControllerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PCMCIAControllerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PCMCIAControllerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PCMCIAControllerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PCMCIAControllerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PCMCIAControllerPrivate_TRU64.h"
#else
#	include "UNIX_PCMCIAControllerPrivate_STUB.h"
#endif
