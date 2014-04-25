
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParticipatesInSetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParticipatesInSetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParticipatesInSetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParticipatesInSetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParticipatesInSetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParticipatesInSetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParticipatesInSetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParticipatesInSetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParticipatesInSetDeps_TRU64.h"
#else
#	include "UNIX_ParticipatesInSetDeps_STUB.h"
#endif
