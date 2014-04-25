
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ThresholdIndicationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ThresholdIndicationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ThresholdIndicationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ThresholdIndicationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ThresholdIndicationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ThresholdIndicationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ThresholdIndicationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ThresholdIndicationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ThresholdIndicationDeps_TRU64.h"
#else
#	include "UNIX_ThresholdIndicationDeps_STUB.h"
#endif
