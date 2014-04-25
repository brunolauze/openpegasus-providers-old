
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextServiceAfterMeterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextServiceAfterMeterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextServiceAfterMeterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextServiceAfterMeterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextServiceAfterMeterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextServiceAfterMeterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextServiceAfterMeterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextServiceAfterMeterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextServiceAfterMeterDeps_TRU64.h"
#else
#	include "UNIX_NextServiceAfterMeterDeps_STUB.h"
#endif
