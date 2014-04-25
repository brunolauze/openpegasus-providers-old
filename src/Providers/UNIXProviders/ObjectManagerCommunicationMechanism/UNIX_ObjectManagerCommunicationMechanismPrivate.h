
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_TRU64.h"
#else
#	include "UNIX_ObjectManagerCommunicationMechanismPrivate_STUB.h"
#endif
