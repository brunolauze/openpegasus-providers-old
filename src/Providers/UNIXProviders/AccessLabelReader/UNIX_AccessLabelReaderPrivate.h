
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccessLabelReaderPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccessLabelReaderPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccessLabelReaderPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccessLabelReaderPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccessLabelReaderPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccessLabelReaderPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccessLabelReaderPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccessLabelReaderPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccessLabelReaderPrivate_TRU64.h"
#else
#	include "UNIX_AccessLabelReaderPrivate_STUB.h"
#endif
