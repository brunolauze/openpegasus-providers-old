
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ESPTransformPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ESPTransformPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ESPTransformPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ESPTransformPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ESPTransformPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ESPTransformPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ESPTransformPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ESPTransformPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ESPTransformPrivate_TRU64.h"
#else
#	include "UNIX_ESPTransformPrivate_STUB.h"
#endif
