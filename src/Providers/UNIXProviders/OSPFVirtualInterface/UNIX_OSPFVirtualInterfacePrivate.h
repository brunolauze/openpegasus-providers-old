
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSPFVirtualInterfacePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSPFVirtualInterfacePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSPFVirtualInterfacePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSPFVirtualInterfacePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSPFVirtualInterfacePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSPFVirtualInterfacePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSPFVirtualInterfacePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSPFVirtualInterfacePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSPFVirtualInterfacePrivate_TRU64.h"
#else
#	include "UNIX_OSPFVirtualInterfacePrivate_STUB.h"
#endif
