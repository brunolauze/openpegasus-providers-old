
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParticipatesInSetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParticipatesInSetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParticipatesInSetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParticipatesInSetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParticipatesInSetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParticipatesInSetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParticipatesInSetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParticipatesInSetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParticipatesInSetPrivate_TRU64.h"
#else
#	include "UNIX_ParticipatesInSetPrivate_STUB.h"
#endif
