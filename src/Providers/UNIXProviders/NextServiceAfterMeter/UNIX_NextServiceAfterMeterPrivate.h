
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextServiceAfterMeterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextServiceAfterMeterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextServiceAfterMeterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextServiceAfterMeterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextServiceAfterMeterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextServiceAfterMeterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextServiceAfterMeterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextServiceAfterMeterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextServiceAfterMeterPrivate_TRU64.h"
#else
#	include "UNIX_NextServiceAfterMeterPrivate_STUB.h"
#endif
