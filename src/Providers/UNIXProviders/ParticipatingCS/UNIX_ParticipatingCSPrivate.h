
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParticipatingCSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParticipatingCSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParticipatingCSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParticipatingCSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParticipatingCSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParticipatingCSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParticipatingCSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParticipatingCSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParticipatingCSPrivate_TRU64.h"
#else
#	include "UNIX_ParticipatingCSPrivate_STUB.h"
#endif
