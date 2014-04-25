
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceAccessURIDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceAccessURIDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceAccessURIDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceAccessURIDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceAccessURIDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceAccessURIDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceAccessURIDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceAccessURIDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceAccessURIDeps_TRU64.h"
#else
#	include "UNIX_ServiceAccessURIDeps_STUB.h"
#endif
