
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_TRU64.h"
#else
#	include "UNIX_CIMXMLCommunicationMechanismPrivate_STUB.h"
#endif
