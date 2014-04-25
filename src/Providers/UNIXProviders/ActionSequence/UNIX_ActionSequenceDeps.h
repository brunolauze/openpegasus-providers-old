
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ActionSequenceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ActionSequenceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ActionSequenceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ActionSequenceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ActionSequenceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ActionSequenceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ActionSequenceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ActionSequenceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ActionSequenceDeps_TRU64.h"
#else
#	include "UNIX_ActionSequenceDeps_STUB.h"
#endif
