
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedTransformPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedTransformPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedTransformPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedTransformPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedTransformPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedTransformPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedTransformPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedTransformPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedTransformPrivate_TRU64.h"
#else
#	include "UNIX_ContainedTransformPrivate_STUB.h"
#endif
