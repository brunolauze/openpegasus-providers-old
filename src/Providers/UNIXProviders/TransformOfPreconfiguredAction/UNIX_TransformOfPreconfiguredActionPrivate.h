
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransformOfPreconfiguredActionPrivate_TRU64.h"
#else
#	include "UNIX_TransformOfPreconfiguredActionPrivate_STUB.h"
#endif
