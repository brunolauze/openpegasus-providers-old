
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_X509CRLDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_X509CRLDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_X509CRLDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_X509CRLDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_X509CRLDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_X509CRLDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_X509CRLDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_X509CRLDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_X509CRLDeps_TRU64.h"
#else
#	include "UNIX_X509CRLDeps_STUB.h"
#endif
