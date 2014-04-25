
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSPFVirtualInterfaceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSPFVirtualInterfaceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSPFVirtualInterfaceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSPFVirtualInterfaceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSPFVirtualInterfaceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSPFVirtualInterfaceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSPFVirtualInterfaceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSPFVirtualInterfaceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSPFVirtualInterfaceDeps_TRU64.h"
#else
#	include "UNIX_OSPFVirtualInterfaceDeps_STUB.h"
#endif
