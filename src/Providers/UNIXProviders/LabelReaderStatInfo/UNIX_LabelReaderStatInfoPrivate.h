
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LabelReaderStatInfoPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LabelReaderStatInfoPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LabelReaderStatInfoPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LabelReaderStatInfoPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LabelReaderStatInfoPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LabelReaderStatInfoPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LabelReaderStatInfoPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LabelReaderStatInfoPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LabelReaderStatInfoPrivate_TRU64.h"
#else
#	include "UNIX_LabelReaderStatInfoPrivate_STUB.h"
#endif
