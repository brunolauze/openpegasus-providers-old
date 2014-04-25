
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RelatedSpanningTreeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RelatedSpanningTreeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RelatedSpanningTreeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RelatedSpanningTreeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RelatedSpanningTreeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RelatedSpanningTreeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RelatedSpanningTreeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RelatedSpanningTreeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RelatedSpanningTreeDeps_TRU64.h"
#else
#	include "UNIX_RelatedSpanningTreeDeps_STUB.h"
#endif
