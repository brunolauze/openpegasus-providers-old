
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicationHandlerCIMXMLPrivate_TRU64.h"
#else
#	include "UNIX_IndicationHandlerCIMXMLPrivate_STUB.h"
#endif
