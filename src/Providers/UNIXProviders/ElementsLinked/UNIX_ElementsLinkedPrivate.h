
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementsLinkedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementsLinkedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementsLinkedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementsLinkedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementsLinkedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementsLinkedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementsLinkedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementsLinkedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementsLinkedPrivate_TRU64.h"
#else
#	include "UNIX_ElementsLinkedPrivate_STUB.h"
#endif
