
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthorizedSubjectPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthorizedSubjectPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthorizedSubjectPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthorizedSubjectPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthorizedSubjectPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthorizedSubjectPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthorizedSubjectPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthorizedSubjectPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthorizedSubjectPrivate_TRU64.h"
#else
#	include "UNIX_AuthorizedSubjectPrivate_STUB.h"
#endif
