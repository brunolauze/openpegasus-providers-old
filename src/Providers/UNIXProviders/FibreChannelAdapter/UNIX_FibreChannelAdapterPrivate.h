
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibreChannelAdapterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibreChannelAdapterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibreChannelAdapterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibreChannelAdapterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibreChannelAdapterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibreChannelAdapterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibreChannelAdapterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibreChannelAdapterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibreChannelAdapterPrivate_TRU64.h"
#else
#	include "UNIX_FibreChannelAdapterPrivate_STUB.h"
#endif
