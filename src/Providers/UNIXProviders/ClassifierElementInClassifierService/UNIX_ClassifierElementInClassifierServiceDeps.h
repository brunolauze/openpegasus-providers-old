
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierElementInClassifierServiceDeps_TRU64.h"
#else
#	include "UNIX_ClassifierElementInClassifierServiceDeps_STUB.h"
#endif
