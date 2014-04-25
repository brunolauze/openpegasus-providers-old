
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierFilterSetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierFilterSetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierFilterSetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierFilterSetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierFilterSetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierFilterSetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierFilterSetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierFilterSetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierFilterSetDeps_TRU64.h"
#else
#	include "UNIX_ClassifierFilterSetDeps_STUB.h"
#endif
