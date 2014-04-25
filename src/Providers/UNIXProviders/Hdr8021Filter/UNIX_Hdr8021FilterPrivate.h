
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Hdr8021FilterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Hdr8021FilterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Hdr8021FilterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Hdr8021FilterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Hdr8021FilterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Hdr8021FilterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Hdr8021FilterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Hdr8021FilterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Hdr8021FilterPrivate_TRU64.h"
#else
#	include "UNIX_Hdr8021FilterPrivate_STUB.h"
#endif
