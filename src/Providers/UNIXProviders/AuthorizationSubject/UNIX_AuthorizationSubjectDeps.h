
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthorizationSubjectDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthorizationSubjectDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthorizationSubjectDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthorizationSubjectDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthorizationSubjectDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthorizationSubjectDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthorizationSubjectDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthorizationSubjectDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthorizationSubjectDeps_TRU64.h"
#else
#	include "UNIX_AuthorizationSubjectDeps_STUB.h"
#endif
