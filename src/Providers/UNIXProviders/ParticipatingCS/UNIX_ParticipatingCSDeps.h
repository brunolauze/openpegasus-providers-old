
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParticipatingCSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParticipatingCSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParticipatingCSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParticipatingCSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParticipatingCSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParticipatingCSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParticipatingCSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParticipatingCSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParticipatingCSDeps_TRU64.h"
#else
#	include "UNIX_ParticipatingCSDeps_STUB.h"
#endif
