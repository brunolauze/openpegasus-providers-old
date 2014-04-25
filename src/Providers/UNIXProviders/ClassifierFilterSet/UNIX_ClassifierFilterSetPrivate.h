
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierFilterSetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierFilterSetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierFilterSetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierFilterSetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierFilterSetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierFilterSetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierFilterSetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierFilterSetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierFilterSetPrivate_TRU64.h"
#else
#	include "UNIX_ClassifierFilterSetPrivate_STUB.h"
#endif
