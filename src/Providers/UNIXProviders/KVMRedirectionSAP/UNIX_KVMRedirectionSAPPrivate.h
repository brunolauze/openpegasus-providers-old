
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KVMRedirectionSAPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KVMRedirectionSAPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KVMRedirectionSAPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KVMRedirectionSAPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KVMRedirectionSAPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KVMRedirectionSAPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KVMRedirectionSAPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KVMRedirectionSAPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KVMRedirectionSAPPrivate_TRU64.h"
#else
#	include "UNIX_KVMRedirectionSAPPrivate_STUB.h"
#endif
