
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementsLinkedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementsLinkedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementsLinkedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementsLinkedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementsLinkedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementsLinkedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementsLinkedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementsLinkedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementsLinkedDeps_TRU64.h"
#else
#	include "UNIX_ElementsLinkedDeps_STUB.h"
#endif
