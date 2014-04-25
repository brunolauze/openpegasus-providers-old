
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VLANForPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VLANForPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VLANForPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VLANForPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VLANForPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VLANForPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VLANForPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VLANForPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VLANForPrivate_TRU64.h"
#else
#	include "UNIX_VLANForPrivate_STUB.h"
#endif
