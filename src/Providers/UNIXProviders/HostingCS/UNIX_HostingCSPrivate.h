
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostingCSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostingCSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostingCSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostingCSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostingCSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostingCSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostingCSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostingCSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostingCSPrivate_TRU64.h"
#else
#	include "UNIX_HostingCSPrivate_STUB.h"
#endif
