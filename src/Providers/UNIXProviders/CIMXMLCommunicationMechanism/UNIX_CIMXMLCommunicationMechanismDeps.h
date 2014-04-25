
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CIMXMLCommunicationMechanismDeps_TRU64.h"
#else
#	include "UNIX_CIMXMLCommunicationMechanismDeps_STUB.h"
#endif
