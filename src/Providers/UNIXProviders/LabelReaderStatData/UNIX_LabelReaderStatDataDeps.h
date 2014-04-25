
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LabelReaderStatDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LabelReaderStatDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LabelReaderStatDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LabelReaderStatDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LabelReaderStatDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LabelReaderStatDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LabelReaderStatDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LabelReaderStatDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LabelReaderStatDataDeps_TRU64.h"
#else
#	include "UNIX_LabelReaderStatDataDeps_STUB.h"
#endif
