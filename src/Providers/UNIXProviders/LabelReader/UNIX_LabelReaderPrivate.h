
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LabelReaderPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LabelReaderPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LabelReaderPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LabelReaderPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LabelReaderPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LabelReaderPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LabelReaderPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LabelReaderPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LabelReaderPrivate_TRU64.h"
#else
#	include "UNIX_LabelReaderPrivate_STUB.h"
#endif
