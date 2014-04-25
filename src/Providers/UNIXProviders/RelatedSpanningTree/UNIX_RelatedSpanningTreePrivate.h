
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RelatedSpanningTreePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RelatedSpanningTreePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RelatedSpanningTreePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RelatedSpanningTreePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RelatedSpanningTreePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RelatedSpanningTreePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RelatedSpanningTreePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RelatedSpanningTreePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RelatedSpanningTreePrivate_TRU64.h"
#else
#	include "UNIX_RelatedSpanningTreePrivate_STUB.h"
#endif
