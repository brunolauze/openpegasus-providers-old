
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_TRU64.h"
#else
#	include "UNIX_ObjectManagerCommunicationMechanismDeps_STUB.h"
#endif
