
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierElementInClassifierServicePrivate_TRU64.h"
#else
#	include "UNIX_ClassifierElementInClassifierServicePrivate_STUB.h"
#endif
