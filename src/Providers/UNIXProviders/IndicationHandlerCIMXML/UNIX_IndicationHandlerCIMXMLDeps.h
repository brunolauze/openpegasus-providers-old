
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicationHandlerCIMXMLDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicationHandlerCIMXMLDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicationHandlerCIMXMLDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicationHandlerCIMXMLDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicationHandlerCIMXMLDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicationHandlerCIMXMLDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicationHandlerCIMXMLDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicationHandlerCIMXMLDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicationHandlerCIMXMLDeps_TRU64.h"
#else
#	include "UNIX_IndicationHandlerCIMXMLDeps_STUB.h"
#endif
