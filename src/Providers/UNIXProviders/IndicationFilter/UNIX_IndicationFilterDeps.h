
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicationFilterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicationFilterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicationFilterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicationFilterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicationFilterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicationFilterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicationFilterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicationFilterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicationFilterDeps_TRU64.h"
#else
#	include "UNIX_IndicationFilterDeps_STUB.h"
#endif
