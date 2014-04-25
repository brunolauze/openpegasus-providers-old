
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClassifierElementUsesFilterListPrivate_TRU64.h"
#else
#	include "UNIX_ClassifierElementUsesFilterListPrivate_STUB.h"
#endif
