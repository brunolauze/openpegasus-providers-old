
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ActionSequencePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ActionSequencePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ActionSequencePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ActionSequencePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ActionSequencePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ActionSequencePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ActionSequencePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ActionSequencePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ActionSequencePrivate_TRU64.h"
#else
#	include "UNIX_ActionSequencePrivate_STUB.h"
#endif
